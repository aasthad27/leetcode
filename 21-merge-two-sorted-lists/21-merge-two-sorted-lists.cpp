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
        ListNode *ans=new ListNode(); // create a new list as ans 
        ListNode *head=ans; // head pointing to the address of ans 
        while(list1&& list2) 
        {
            if( list1->val <= list2->val) // if elements of list one is small then print list 1
            {
                
                ans->next=new ListNode(list1->val);
                list1=list1->next; // list 1 next element check
        
            }
            else                    // if elements of list two is small print list  2 
            {
              ans->next=new ListNode(list2->val);
                list2=list2->next;            // list 2 next element check
                
            }
            ans=ans->next;   // ans ko next kar do
        }
        while(list1!=NULL) // if list 1 doesn't end then print rest elemnets in list 1
        {
            ans->next=new ListNode(list1->val);
            list1=list1->next; // list 1 ko aage 
            ans=ans->next; // ans ko aage 
}
        while(list2!=NULL) //  same for list 2
        {
            ans->next=new ListNode(list2->val);
            list2=list2->next;
            ans=ans->next;
}
        return head->next; // head next cuz ans next se elements store hue hai :)))))
        
    }
};