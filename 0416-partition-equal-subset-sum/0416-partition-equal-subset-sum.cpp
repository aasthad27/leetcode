class Solution {
public:
    bool f(vector<int>&arr,int i, int target,vector<vector<int>>&dp)
    {
        if(target==0)
        return true;
        if(i==0)
        return (target==arr[0]);
        if(dp[i][target]!=-1)
        return dp[i][target];
        int notTake=f(arr,i-1,target,dp);
        bool Take=false;
        if(target>=arr[i])
         Take=f(arr,i-1,target-arr[i],dp);
        return dp[i][target]=Take||notTake;
    }
    bool canPartition(vector<int>& nums) {
        int sum=0;
        
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
        }
        if(sum%2!=0)
            return false;
        sum=sum/2;
        int n=nums.size();
        vector<vector<int>>dp(n,vector<int>(sum+1,-1));
      return f(nums,n-1,sum,dp);
    }
};