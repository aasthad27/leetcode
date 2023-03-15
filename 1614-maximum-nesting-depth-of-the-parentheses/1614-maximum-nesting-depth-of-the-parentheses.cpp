class Solution {
public:
   int maxDepth(string s) {
        stack<char>st;
        int ct=0;
        int max=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') {
                st.push(s[i]);
                ct++;
            // if (ct > max) max = ct;
            }
            else if(s[i]==')') {
                if(!st.empty()){
                    st.pop();
                    ct--;
                }
          
            }
            
          if (ct > max) max = ct;
        }
        return max;
    }
};