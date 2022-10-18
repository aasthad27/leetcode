class Solution {
public:
    string countAndSay(int n) {
    string ans="1";
        for(int i=2;i<=n;i++)
        {
            string s=ans;
            int j=0;
             ans="";
            while(j<s.length())
            {
                int k=j;
                while(j<s.length() && s[j]==s[k])
                {
                    k++;
                }
                ans =ans + to_string(k-j)+s[j];
                j=k;
            }
        }
        return ans;
    }
};