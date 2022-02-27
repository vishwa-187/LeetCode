class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<int>());
        int t = ((nums[0]-1)*(nums[1]-1));
        return t;
        
    }
};

OR
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        reverse(nums.begin() , nums.end());
        return((nums[0]-1)*(nums[1]-1));
    }
};

