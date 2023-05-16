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
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr|| head->next==nullptr)
            return head;
        ListNode* prev=nullptr;
        ListNode* curr=head;
        ListNode* nxt=head->next;
        head=head->next;
        while(curr&&nxt)
        {
            if(prev)
            {
                prev->next=nxt;
            }
            curr->next=nxt->next;
            nxt->next=curr;
            prev=curr;  // prev update
            curr=curr->next;  // curr update
            if(curr)
            {
                nxt=curr->next;  // next update
            }
            
        }
        return head;
    }
};