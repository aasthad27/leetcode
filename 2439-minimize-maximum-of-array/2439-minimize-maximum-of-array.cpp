class Solution {
public:
    bool isValid(vector<int>&nums,int mid)
    {
        long sum=0;
     for(int i=0;i<nums.size();i++)
     {
        sum+=nums[i];
         if(sum>(long) mid *(i+1))
             return false;
     }
    return true;
    }
    int minimizeArrayValue(vector<int>& nums) {
     int maxi=INT_MIN;
        int ans=-1;
        for(int i=0;i<nums.size();i++)
        {
            maxi=max(nums[i],maxi);
        }
        int l=0;
        int r=maxi;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(isValid(nums,mid))  //true
            {
                 r=mid-1;
                ans=mid;
            }
            else
            {
              l=mid+1;  
            }
        }
        return ans;
    }
};