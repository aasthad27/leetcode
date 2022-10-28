class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        map<string,vector<string>>m;
        
        for(auto s:strs) // we are using sorted string as key ans the initial string as value 
        {
            string st=s;
            sort(s.begin(),s.end());
            m[s].push_back(st); // key->sorted ,value->initial
        }
        for(auto it =m.begin();it!=m.end();it++)
        {
            ans.push_back(it->second); 
        }
        return ans;
    }
};