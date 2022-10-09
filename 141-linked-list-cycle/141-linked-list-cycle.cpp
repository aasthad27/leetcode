/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *p,*q;
        p=head;
        q=head;
        if(head==NULL)
        {
            return false;
        }
        do
        {
            p=p->next;
            q=q->next;
            q=q!=NULL?q->next:NULL;
            if(p==q && p !=NULL && q !=NULL)
                return true;
}while(p&&q);
       return false;
    }
};