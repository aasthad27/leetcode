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
    
    ListNode* reverse(ListNode* head) {
        ListNode *curr=head, *prev=NULL, *nextPtr;
        while(curr!=NULL) {
            nextPtr=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nextPtr;
        }
        return prev;
    }
    int countNodes(ListNode *head) {
        int c=0;
        while(head!=NULL) {
            c++;
            head=head->next;
        }
        return c;
    }
    
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        // no reversal required
        if(left==right)
            return head;
        
        // if we have to reverse the entire LL
        if(right==countNodes(head) && left==1)
            return reverse(head);
        
        int i=1;
        ListNode *ptr=head;
        ListNode *leftPtr;
        ListNode *saveLeft;
        
        if(left!=1) {

            while(i<left-1) {
                ptr=ptr->next;
                i++;
            }

            saveLeft=ptr;
            leftPtr=ptr->next;
            
        }
        
        if(left==1) {
            leftPtr=head;
        }
        
        ListNode *rightPtr, *saveRight;
        
        while(i<right) {
            ptr=ptr->next;
            i++;
        }
        
        saveRight=ptr->next;
        rightPtr=ptr;
        rightPtr->next=NULL;
        
        
        ListNode *revHead=reverse(leftPtr);
        if(left!=1)
        {
            saveLeft->next=revHead;
        
        ptr=saveLeft;
        }
        else
        {
            ptr=revHead;
}
      
        while(ptr->next!=NULL) 
            ptr=ptr->next;
        
        ptr->next=saveRight;
        if(left==1)
        {
            return revHead;
        }
        else
        return head;
    }
};