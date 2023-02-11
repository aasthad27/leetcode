//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// calculate the maximum sum with out adjacent
	int maxSum(int i,int n,int *arr,vector<int> &dp)
	{
	    if(i>=n)
	    return 0;
	    if(dp[i]!=-1)
	    return dp[i];
	    int l=maxSum(i+2,n,arr,dp)+arr[i];
	    int r=maxSum(i+1,n,arr,dp);
	     dp[i]=max(l,r);
	    return dp[i];
	}
	int findMaxSum(int *arr, int n) {
	    vector<int>dp(n+1,-1);
	    return maxSum(0,n,arr,dp);
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaxSum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends