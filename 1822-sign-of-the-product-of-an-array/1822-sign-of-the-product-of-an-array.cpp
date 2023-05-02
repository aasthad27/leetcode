class Solution {
public:
    int arraySign(vector<int>& nums) {
        int prod=0;
        int neg=0;
        int zero=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                neg++;
            }
             else if(nums[i]==0)
             {
                 zero++;
             }
        }
        if(zero>=1)
        {
           prod=0; 
        }
        else if(neg%2==0)
        {
            prod=1;
        }
        else
        {
            prod=-1;
        }
        return prod;
    }
};