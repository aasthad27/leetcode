//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        int sum=0,sp=0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]-'0'>=0 && str[i]-'0'<=9)
            {
                sum=sum*10+(str[i]-'0');
            }
            else if(i==0 && str[i]=='-')
            {
                sp=1;
            }
            else 
            {
                return -1;
            }
        }
        if(sp==1)
        return -(sum);
        else 
        return sum;
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends