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
private:
    void deleteHead(ListNode* &head) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next == nullptr) return nullptr;

        ListNode* mover = head;
        int size = 0;

        while(mover != nullptr) {
            size++;
            mover = mover->next;
        }

        int pos = size - n + 1;

        if(pos == 1) {
            deleteHead(head);
            return head;
        }

        int cnt = 1;

        mover = head;
        ListNode* prev = nullptr;

        while(cnt != pos and mover != nullptr) {        
            prev = mover;
            mover = mover->next;
            cnt++;
        }

        if(mover == nullptr)
            return head;

        prev->next = mover->next;
        return head;
    }
};
