class Solution {
public:
    bool arrayIsPossibleForY(vector<int>& nums,int mid)
    { 
        int n=nums.size();
        long sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            if(sum >(long) mid*(i+1))
                return false;
          
        }
        return true;
    }
    int minimizeArrayValue(vector<int>& nums) {
        int maxi=INT_MIN;
        int l=0;
        for(int i=0;i<nums.size();i++)
        {
            maxi=max(maxi,nums[i]);
        }
        int r=maxi;
        int ans=0;
        while(l<=r)
        {
            int mid=l+(r-l)/2;
            if(arrayIsPossibleForY(nums,mid)) // valid
            {
                ans=mid;                             // check left -->for smaller number 
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return ans;
    }
};