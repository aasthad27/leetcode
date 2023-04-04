//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

int minSteps(string str) 
{

   int i=1;
   int a_count=0;
   int b_count=0;
   if(str[0]=='a')
   a_count++;
   else
   b_count++;
    while(i<str.size())
    {
        if(str[i]=='a' && str[i-1]!='a')
        {
            a_count++;
        }
        else if(str[i]=='b' && str[i-1]!='b')
        {
            b_count++;
        }
        i++;
       
    }
    return (min(a_count,b_count))+1;
}

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        string str;
        cin >> str;
        cout << minSteps(str) << endl;
    }
}

// } Driver Code Ends