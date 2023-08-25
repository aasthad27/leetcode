//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this function*/

class Solution{
    public:
    int maxLen(vector<int>&A, int n)
    {   
        int sum=0;
        int ans=0;
        int presum=0;
        unordered_map<int,int>mp;
        for(int i=0;i<n;i++)
        {
            presum+=A[i];
            if(presum==0)
            ans=i+1;
            if(mp.find(presum)==mp.end()) // if not present
            {
                mp[presum]=i;
            }
            else // already present
            {
                ans=max(ans,i-mp[presum]);
            }
            
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        vector<int> array1(m);
        for (int i = 0; i < m; ++i){
            cin>>array1[i];
        }
        Solution ob;
        cout<<ob.maxLen(array1,m)<<endl;
    }
    return 0; 
}



// } Driver Code Ends