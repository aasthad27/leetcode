//{ Driver Code Starts
// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <bits/stdc++.h>
using namespace std;



// } Driver Code Ends

class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
      int fav=0;
      int nfav=0;
      for(int i=0;i<n;i++)
      {
          if(arr[i]<=k)
          fav++;         // window size
      }
      for(int i=0;i<fav;i++)
      {
          if(arr[i]>k)
          nfav++;
      }
      int l=0;
      int r=fav-1;
      int ans=INT_MAX;
      while(r<n)
      {
          ans=min(ans,nfav);
          r++; //include next element
          if(r<n && arr[r]>k)
          nfav++;
          if(l<n && arr[l]>k)
          nfav--;  // exclude that as window moves forward
          l++;
      }
      return ans;
    }
};


//{ Driver Code Starts.

// Driver code
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        Solution ob;
        cout << ob.minSwap(arr, n, k) << "\n";
    }
	return 0;
}

// } Driver Code Ends