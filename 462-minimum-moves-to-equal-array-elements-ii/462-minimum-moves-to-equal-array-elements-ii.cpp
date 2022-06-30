class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int med;
       sort(nums.begin(),nums.end());
        int n = nums.size();
        if(n%2!=0)
             med = nums[n/2];
        else
             med = (nums[n/2]+nums[(n/2)-1])/2;
        int ans = 0;
        for(int i=0;i<n;i++)
            ans = ans + abs(nums[i]-med);
        return ans;
    }
};