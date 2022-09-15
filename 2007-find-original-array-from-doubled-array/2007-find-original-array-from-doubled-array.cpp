class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
       int n=changed.size();
        vector<int>ans;
       
     if(n%2)
     {
         return ans;
     }
        map<int,int>mp;
        for(auto x:changed)
        {
            mp[x]++;
        }
         sort(changed.begin(),changed.end());
          for(auto x:changed)
          {
              if(mp[x]==0)
              {
                  continue;
              }
              if(mp[2*x]==0)
              {
                 return {}; 
              }
              if(mp[x] && mp[2*x])
              {
                  mp[2*x]--;
                  ans.push_back(x);
                  mp[x]--;
              }
          }
        return ans;
    }
};