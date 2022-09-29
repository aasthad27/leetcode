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
     ListNode *p, *q;
        int c=0;
        while(p)
        {
            c++;
            p=p->next;
        }
         int z=c-n;
        if(n==c)
        {
            p=head;
            head=head->next;
            delete p;
        }
       else
       {
           p=head;
           q=NULL;
        for(int i=0;i<z && p ;i++)
        {
            q=p;
            p=p->next;
        }
           if(p)
           {
        q->next=p->next;
        delete(p);
       }
       }
        return head;
    }
    
};