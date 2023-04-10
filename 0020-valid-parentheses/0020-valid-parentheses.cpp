class Solution {
public:
    bool isValid(string s) {
        stack<int>p;
        for(int i=0;i<s.size();i++)
        {
          if(s[i]=='(' || s[i]=='{' || s[i]=='[')
          {
              p.push(s[i]);
          }
            else 
            {
                if(p.empty())
                    return false;
                // char c=p.top();
                if((s[i]==')' && p.top()=='(' )|| (s[i]=='}'  && p.top()=='{' )||( s[i]==']' && p.top()=='['))
                {
                    p.pop();
                 continue;
                }
                else
                    return false;
                
                    
            }
           
        }
        if(p.empty())
            return true;
        else
            return false;
    }
};