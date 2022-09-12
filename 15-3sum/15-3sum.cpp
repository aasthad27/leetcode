class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size()-2;i++) 
    {
        int l=i+1,r=nums.size()-1;
        if(i==0||nums[i]!=nums[i-1])
        {
          while(l<r)
          {
              if(nums[l]+nums[r]== (0-nums[i]))
              {
                vector<int>temp;
                  temp.push_back(nums[l]);
                  temp.push_back(nums[r]);
                  temp.push_back(nums[i]);
                  ans.push_back(temp);
              
              while(l<r && nums[l+1]==nums[l])
              {
                  l++;
              }
              while(l<r && nums[r-1]==nums[r])
              {
                  r--;
              }
              l++;
              r--;
          }
             else if(nums[l]+nums[r]<(0-nums[i]))
             {
                 l++;
             }
              else
              {
                  r--;
              }
        }
}

    }
        return ans;
    }
};