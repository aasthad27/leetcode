//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{

  public:
	int minDifference(int arr[], int n)  { 
	    int ts=0;
	    for(int i=0;i<n;i++)
	    {
	        ts+=arr[i];
	    }
	    int k=ts;
	   vector<vector<bool>>dp(n,vector<bool>(k+1,0));
	   for(int i=0;i<n;i++)
	   {
	       dp[i][0]=true;
	   }
	   if(arr[0]<=k)
	   dp[0][arr[0]]=true;
	   for(int i=1;i<n;i++)
	   {
	       for(int target=1;target<=k;target++)
	       {
	           bool notTake=dp[i-1][target];
	           bool Take=false;
	           if(arr[i]<=target)
	           Take=dp[i-1][target-arr[i]];
	           dp[i][target]=Take||notTake;
	       }
	   }
	   int mini=1e9;
	   for(int i=0;i<=ts/2;i++)
	   {
	       if(dp[n-1][i]==true)
	       mini=min(mini,abs(ts-i)-i);
	   }
	   return mini;
	} 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends