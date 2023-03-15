class Solution {
public:
   int maxDepth(string s) {
       if(s.length()==1 || s.length()==0)
           return 0;
        stack<char>st;
        int ct=0;
        int max=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') {
                st.push(s[i]);
                ct++;
            if (ct > max) max = ct;
            }
            else if(s[i]==')') {
                if(!st.empty()){
                    st.pop();
                    ct--;
                }
          
            }
            

        }
        return max;
    }
};