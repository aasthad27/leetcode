class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>>res;
        if(nums.empty())
            return res;
        sort(nums.begin(),nums.end());
          for(int i=0;i<nums.size();i++)
          {
              for(int j=i+1;j<nums.size();j++)
              {
                  long target_2=(long)target-nums[i]-nums[j];
                  int l=j+1;
                  int r=nums.size()-1;
                  while(l<r)
                  {
                      int sum=nums[l]+nums[r];
                      if(sum<target_2)
                      {
                          l++;
                      }
                      else if(sum>target_2)
                      {
                          r--;
                      }
                      else
                      {
                      vector<int>ans(4,0);
                      ans[0]=nums[i];
                          ans[1]=nums[j];
                          ans[2]=nums[l];
                          ans[3]=nums[r];
                         res.push_back(ans);
                          
                       
                      while(l<r&& nums[l]==ans[2])
                      {
                          l++;
                      }
                      while(l<r&& nums[r]==ans[3])
                      {
                          r--;
                      }
                      }
                  }
                  while(j+1<nums.size() && nums[j+1]==nums[j] )
                  {
                      j++;
                  }
                  
                  
              }
              while(i+1<nums.size() && nums[i+1]==nums[i] )
              {
                  i++;
              }
          }
        return res;
    }
    
};