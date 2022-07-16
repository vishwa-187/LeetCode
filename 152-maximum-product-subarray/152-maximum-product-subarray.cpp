class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxn = nums[0];
        int minn = nums[0];
        int ans = nums[0];
        int n = nums.size();
        for(int i = 1;i<n;i++){
            if(nums[i]<0)
                swap(maxn,minn);
            minn = min(nums[i],minn*nums[i]);
            maxn = max(nums[i],maxn*nums[i]);
            ans = max(ans,maxn);
        }
        
        return ans;
    }
};