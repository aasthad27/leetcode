class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int n=nums.size();
        int maxsum=0;
        sort(nums.begin(),nums.end());
        int i=0;
        while(i<(n-2))
        {
          if(nums[i]+nums[i+1]>nums[i+2]) 
          {
              maxsum=max((nums[i]+nums[i+1]+nums[i+2]),maxsum);
              i++;
            
          }
            else
            {
                i++;
}
            
        }
        return maxsum;
    }
};