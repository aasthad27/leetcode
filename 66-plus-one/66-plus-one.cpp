class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
         int n=digits.size()-1;
       for(int i=n;i>=0;i--)
       {
        if(digits[i]>=0 && digits[i]<=8)
        {
            digits[i] +=1;
            return digits;
           
        }
            else 
            {
               digits[i]=0;
               
            }
       }
        digits.emplace_back(0);
        digits[0]=1;
      
        return digits;
    }
};