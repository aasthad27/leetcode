class Solution {                                       // using set -->unique non zero numbers==>numbers of operations
public:
    int minimumOperations(vector<int>& nums) {
    set<int>s;
        for(auto i:nums)
        {
            if(i!=0)
                s.insert(i);
        }
        return s.size();
    }
};