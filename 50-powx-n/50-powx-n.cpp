class Solution {
public:
    double myPow(double x, int n) {
        if (n==0)
        {
            return 1;
        }
        else if(n%2==0)
        {
            if(n<0)
            {
                n=abs(n);
                x=1/x;
            }
           return myPow(x*x,n/2) ;
        }
     
        else
        {
            if(n<0)
            {
                n=abs(n);
                x=1/x;
            }
            return x*myPow(x,n-1);
        }
        
    
      
    }
};