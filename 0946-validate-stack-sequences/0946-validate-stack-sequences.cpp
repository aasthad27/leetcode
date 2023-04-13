class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int>s;
        int l=0;
        for(int i=0;i<pushed.size();i++)
        {
        
            s.push(pushed[i]);
            while(!s.empty() && popped[l]==s.top())
            {
                s.pop();
                l++;
            }
        }
     return s.empty();
    }
};