class Solution {
public:
    string countAndSay(int n) {
    string ans="1"; // for n=1 it will be 1 always 
        for(int i=2;i<=n;i++)
        {
            string s=ans;
            int j=0;
             ans="";
            while(j<s.length())
            {
                int k=j;
                while(j<s.length() && s[j]==s[k]) //check for repeated 
                {
                    k++;                         //stores the count
                }
                ans =ans + to_string(k-j)+s[j]; //append count and that element
                j=k; // move to the non repeating for next iteration
            }
        }
        return ans;
    }
};