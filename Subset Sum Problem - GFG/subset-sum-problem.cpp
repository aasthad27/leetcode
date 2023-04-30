//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int f(vector<int>&arr,int i, int target,vector<vector<int>>&dp)
    {
        if(target==0)
        return 1;
        if(i==0)
        return (target==arr[0]);
        if(dp[i][target]!=-1)
        return dp[i][target];
        int notTake=f(arr,i-1,target,dp);
        int Take=0;
        if(target>=arr[i])
         Take=f(arr,i-1,target-arr[i],dp);
        return dp[i][target]=Take||notTake;
    }
    bool isSubsetSum(vector<int>arr, int sum){
        int n=arr.size();
        vector<vector<int>>dp(n,vector<int>(sum+1,-1));
      return f(arr,n-1,sum,dp);
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends