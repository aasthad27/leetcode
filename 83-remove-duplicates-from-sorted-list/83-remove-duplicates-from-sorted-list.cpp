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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *p ,*q;
        p=head;
      //   q=head;
        if(!p)
            return NULL;
        while( p->next)
        {
           
            if(p->next->val==p->val)
            {
                auto temp=p->next;
                 p->next=temp->next;
                delete temp;
          
               
            }
           else{
             
                 p=p->next;
           }
           
        }
        return head;
    }
};