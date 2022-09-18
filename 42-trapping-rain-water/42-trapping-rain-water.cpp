class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size()-1;
        int leftmax=0,rightmax=0,sum=0;
        int l=0,r=n;
       while(l<=r)
       {
           if(height[l]<=height[r])
           {
               if(height[l]>=leftmax) // no water will contained
                   leftmax=height[l];
               else
                   sum+=leftmax-height[l]; // water trapped
                   l++;
           } 
           else
           {
               if(height[r]>=rightmax)
                   rightmax=height[r];
                else
               sum+=rightmax-height[r];
               r--;
       }
       }
        return sum;
    }
};