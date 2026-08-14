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

        unordered_map<int, int> mpp;

        while(mover != nullptr) {
            if(mpp.contains(mover->val))
                return true;
            
            mpp[mover->val] = 1;
            mover = mover->next;
        }
        return false;
    }
};
