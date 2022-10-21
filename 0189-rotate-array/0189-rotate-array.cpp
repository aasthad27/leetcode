class Solution {
    public :
    void reverse(vector<int>& nums, int i, int j){
        int l = i; 
        int r = j;
        
        while(l < r){
            int temp = nums[l];
            nums[l] = nums[r];
            nums[r] = temp;
            
            l++;
            r--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        k = k % nums.size(); 
        if(k < 0){ 
            k += nums.size();
        }
        reverse(nums, 0, nums.size() - k - 1); // rev of part1 
        reverse(nums, nums.size() - k, nums.size() - 1); // rev of part2 
        reverse(nums, 0, nums.size() - 1); // whole rev 
    }
};