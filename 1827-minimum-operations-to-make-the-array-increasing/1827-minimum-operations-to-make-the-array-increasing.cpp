class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int ans=0;
        for(int i =1;i<n;i++){
            if(nums[i-1]<nums[i])
                continue;
            else if(nums[i-1]==nums[i]){
                ans = ans +1;
                nums[i]++;

                
            }
            else{
                ans = ans + (nums[i-1] - nums[i] + 1);
                nums[i] = nums[i-1] + 1;
            }
            
                
        }
        return ans;
        
    }
};