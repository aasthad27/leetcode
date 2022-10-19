class Solution {
public:
    static bool comparator(pair<string,int>&q,pair<string,int>&r)
    {
        if(q.second!=r.second)
            return q.second>r.second ; // if not equal freq sort 
            else
                return q.first<r.first; // if equal then lexicographical sort
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
   map<string,int>mp;
        for(auto i:words)
        {
            mp[i]++;
        }
        vector<pair<string,int>>ans;
        for(auto it:mp)
        {
           pair p{it.first,it.second};
               ans.push_back(p)  ; 
        }
        sort(ans.begin(),ans.end(),comparator);
        vector<string>result;
        for(int i=0;i<k;i++)
        {
            result.push_back(ans[i].first);
        }
        return result;
    }
};