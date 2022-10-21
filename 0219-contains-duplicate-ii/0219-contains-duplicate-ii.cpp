class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
      map<int,int>mp;
      for(int i=0;i<nums.size();i++)
      {
          int value=nums[i];
          if((mp.find(value)!=mp.end() && abs(mp[value]-i)<=k) )
          {
              return true;
          }
          else
          {
               mp[value]=i;
          }
         
      }
        return false;
    }
};