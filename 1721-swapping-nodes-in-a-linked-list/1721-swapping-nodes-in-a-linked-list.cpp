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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* lp=head;
        ListNode* rp=head;
          
        for(int i=0;i<k-1;i++)
        {
            rp=rp->next;
        }
         ListNode *ep = rp;
        while(rp->next)
        {
           lp=lp->next;
           rp=rp->next;
        }
        swap(ep->val,lp->val);
        return head;
    }
};