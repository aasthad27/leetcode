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
    ListNode* deleteMiddle(ListNode* head) {
        int c=0,n;
        ListNode * p=head, *q=head,*s=NULL;
        if(head->next==NULL)
            return NULL;
        else
        {
        while(p!=NULL)
        {
         c++;
            p=p->next;
     }
      
           n=(c/2); 
       for(int i=0;i<n;i++)
        {
            s=q;
            q=q->next;
        }
        s->next=q->next;
        delete(q);
        }
        return head;
    }
};