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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int>v;
        ListNode *temp;
         ListNode *head=NULL;
        ListNode *p;
        for(int i=0;i<lists.size();i++ ) // push all the elements in  vector
        {
            temp=lists[i];
            while(temp)
            {
                v.push_back(temp->val); 
                temp=temp->next;
            }
        }
        sort(v.begin(),v.end());
         if(v.size()==0)
             return NULL;
        head=new ListNode(v[0]);
        p=head;
        for(int i=1;i<v.size();i++)
        {
            if(i==v.size())
            {
                p->next=NULL;
            }
            else
            {
                ListNode *a=new ListNode(v[i]);
                p->next=a;
                p=p->next;
}
            
        }
        return head;
        
    }
};