class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int>s1,s2;
        vector<int>ans;
        map<int,int>mp;
        int n1=nums1.size();
        int n2=nums2.size();
        for(int i=0;i<n1;i++)
        {
            s1.insert(nums1[i]);
        }
        for(int i=0;i<n2;i++)
        {
            s2.insert(nums2[i]);
        }
        for(auto it=s1.begin();it!=s1.end();it++)
        {
            mp[*it]++;
        }
        for(auto it=s2.begin();it!=s2.end();it++)
        {
            mp[*it]++;
        }
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second==2)
            {
                ans.push_back(it->first);
            }
        }
        return ans;
    }
};