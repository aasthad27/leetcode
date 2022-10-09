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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    ListNode *first =list1;
    ListNode *second=list2;
    ListNode *head, *last;
                if(list1 == NULL )
        {
            return list2;
        }
        else if(list2==NULL){
            return list1;
        }
    

        else if(first->val<second->val)
        {
         last=head=first;
            first=first->next;
            last->next=NULL;
        }
        else
        {
          last=head=second;
            second=second->next;
            last->next=NULL;
}
        while(first && second)
        {
            if(first->val<second->val)
            {
             last->next=first;
                last=first;
                first=first->next;
                last->next=NULL;
            }
            else
            {
                last->next=second;
                last=second;
                second=second->next;
                last->next=NULL;
            }
        
        }
        if(first)
        {
            last->next=first;
        }
        else
        {
            last->next=second;
}
        return head;
    }
};