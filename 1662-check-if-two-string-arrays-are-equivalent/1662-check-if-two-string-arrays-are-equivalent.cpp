class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {  
  int l=0,r=0;
        int m=0,n=0;
        while(l<word1.size()&&r<word2.size())
        {
         if(word1[l][m]!=word2[r][n])
         {
            return false; 
         }
      m++;
            n++;
        if(m==word1[l].size())
        {
            m=0;
            l++;
            
        }
        if(n==word2[r].size())
        {
            n=0;
            r++;                                                                                                                                                                                                                                                                                                                   
        }
        }
      
      return l==word1.size()&& r==word2.size();
	  }
	  };