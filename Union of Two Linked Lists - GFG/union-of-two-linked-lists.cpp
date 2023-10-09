//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};


// } Driver Code Ends
/*
// structure of the node is as follows

struct Node
{
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

*/
class Solution
{
    public:
    struct Node* makeUnion(struct Node* head1, struct Node* head2)
    {
        Node* merge=merged(head1,head2);
        Node* sort=sorted(merge);
        return sort;
    }
    struct Node* merged(Node* a,Node* b)
    {
        if(a==NULL)
        {
            return b;
        }
       if(b==NULL)
       {
           return a;
       }
       Node* ans =NULL;
       if(a->data<b->data)
       {
           ans=a;
           ans->next=merged(a->next,b);
       }
       else if(a->data>b->data)
       {
           ans=b;
           ans->next=merged(a,b->next);
       }
       else
       {
           ans=a;
           ans->next=merged(a->next,b->next);
       }
        return ans;
    }
    struct Node* sorted(Node* head)
    {
        if(head==NULL || head->next==NULL)
        {
            return head;
        }
        Node* slow=head;
        Node* fast=head->next;
        while(fast!=NULL && fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
        }
        Node* end1=slow;
        slow=slow->next;
        end1->next=NULL;
        Node* secondHead=slow;
        Node* first=sorted(head);
        Node* second=sorted(secondHead);
        Node* ans=merged(first,second);
        return ans;
        
    }
};


//{ Driver Code Starts.

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution obj;
        Node* head = obj.makeUnion(first,second);
        printList(head);
    }
    return 0;
}

// } Driver Code Ends