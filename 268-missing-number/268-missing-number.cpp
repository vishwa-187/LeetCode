class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int i;
        int sum =0;
        int actual = (n*(n+1))/2;
        for(i=0;i<n;i++){
            sum = sum + nums[i];
        }
        ans = actual - sum;
        return ans;
    }
};