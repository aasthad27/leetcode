class Solution {
public:
 int partitionString(string s) {
    unordered_map<char, int> mp;
    int l = 0;
    int r = 0;
    int c = 0;
    while (r < s.size()) {
        mp[s[r]]++;
        if (mp[s[r]] >= 2) {
            c++;
            mp.clear();
            mp[s[r]] = 1;
            l = r;
        }
        r++;
    }
    return c + 1;
}
};