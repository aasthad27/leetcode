class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
      int c=1;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==c)
                c=c+1;
            if(nums[i]<c)
                continue;
            else
                break;
            
        }
            
return c;
    }
};