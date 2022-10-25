class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
     string a,b;
        for(auto x:word1)
        {
            a+=x;
        }
        for(auto y:word2)
        {
            b+=y;
        }
        if(a.compare(b)==0)
        {
            return true;
        }
        return false;
    }
};