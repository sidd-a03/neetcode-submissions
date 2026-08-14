/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    bool hasCycle(ListNode* head) {
        ListNode* mover = head;

        unordered_set<ListNode*> seen;

        while(mover != nullptr) {
            if(seen.contains(mover))
                return true;
            
            seen.insert(mover);
            mover = mover->next;
        }
        return false;
    }
};
