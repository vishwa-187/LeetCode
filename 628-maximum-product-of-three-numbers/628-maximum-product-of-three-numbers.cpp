class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        int n = nums.size();
        int j = nums[0]*nums[1]*nums[2];
        int h = nums[0]*nums[n-1]*nums[n-2];
        return max(j,h);
        
    }
};