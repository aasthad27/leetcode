class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
int l=0,r;
        if(nums.size()==0)
            return 0;
  for( r=0;r<nums.size();r++)
  {
      if(nums[l]!=nums[r])
      {
          l++;
          nums[l]=nums[r];
      }
}
        return l+1;
    }
};
    