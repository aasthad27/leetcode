class Solution {
public:
    int lastStoneWeight(vector<int>& a) {
        priority_queue<int>p(a.begin(),a.end());

        while(p.size() > 1)
        {
            int a = p.top();
            p.pop();
            int b = p.top();
            p.pop();

            if(a != b)
                p.push(abs(a-b));
        }
        return p.empty() ? 0 : p.top();
    }
};