class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
  int f=INT_MAX;
        int n=nums.size();
        int i=0;
        int s=INT_MAX;
       for(int i=0;i<n;i++)
        {
        if(nums[i]<f)
        {
            f=nums[i];
           
          }
            else if(nums[i]>f && nums[i]<s)
            {
                s=nums[i];
         
            }
            else if(nums[i]>s)
            {
                return true;
            }
          
        
    }
        return false;
    }
};