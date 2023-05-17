class Solution {
public:
    int f(int i,vector<int>& coins,int target,vector<vector<int>>&dp)
    {
        if(i==0)
        {
           if(target%coins[0]==0 )
               return target/coins[0];
            else
                return 1e9;
        }
        if(dp[i][target]!=-1)
            return dp[i][target];
        int not_taken=0+ f(i-1,coins,target,dp);
        int taken=1e9;
        if(coins[i]<=target)
            taken=1+f(i,coins,target-coins[i],dp);
        return dp[i][target]= min(not_taken,taken);
            
    }
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
       vector<vector<int>>dp(n,vector<int>(amount+1,-1));
       int x= f(n-1,coins,amount,dp);
         if(x!=1e9) return x;
        else return -1;
    }
};