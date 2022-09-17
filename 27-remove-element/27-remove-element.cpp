class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
       vector<int>ans;
        for(auto x:nums)
        {
            if(x!=val)
            {
                ans.push_back(x);
            }
            
        }
        nums=ans;
        return nums.size();
    }
};