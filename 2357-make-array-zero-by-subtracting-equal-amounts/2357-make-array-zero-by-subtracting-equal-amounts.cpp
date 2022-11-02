class Solution {                                       // brute force
public:
    int minimumOperations(vector<int>& nums) {
        int store,op=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>0)
            {
                store=nums[i];
                op++;
            
            for(int j=i;j<nums.size();j++)
            {
                nums[j]-=store;
                
            }
            }
        }
        return op;
    }
};