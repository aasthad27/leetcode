class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        string v="";
       for(int i=0;i<s.length();i++)
       {
           if(s[i]=='*')
           {
               st.pop();
            
            }
           else
           {
               st.push(s[i]);
           }
       
       }
       while(!st.empty())
       {
           char c=st.top();
           v.push_back(c);
           st.pop();
       }
        reverse(v.begin(),v.end());
        return v;
    }
};