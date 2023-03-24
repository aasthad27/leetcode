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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *r=head;
        ListNode*q=NULL;
        int c=0;
        while(r)
        {
            r=r->next;
            c++;
        }
        int z=c-n;
        if(z==0)
        {
         head=head->next;
        return head;
        }
        ListNode *p=head;
        while(z>0 && p!=NULL)
        {
            q=p;
            p=p->next;
            z--;
        }
        if(p)
        {
            q->next=p->next;
        }
        else if(p->next==NULL)
            q->next=NULL;
    return head;
    }
};