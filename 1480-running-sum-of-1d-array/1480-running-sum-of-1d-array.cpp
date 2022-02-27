class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> ans(nums.size());
        int sum = nums[0];
        ans[0] = sum;
        for(int i  = 1;i<nums.size();i++){
            sum = sum + nums[i];
            ans[i] = sum;
        }
        return ans;
    }
};