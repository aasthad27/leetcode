class Solution {
public:
    string reverseWords(string s) {
        int n=s.size();
        int l=0;
        for(int r=0;r<n;r++)
        {
            if(s[r]==' ')
            {
                reverse(s.begin()+l,s.begin()+r);
                l=r+1;
            }
        }
        reverse(s.begin()+l,s.end());
        return s;
    }
};