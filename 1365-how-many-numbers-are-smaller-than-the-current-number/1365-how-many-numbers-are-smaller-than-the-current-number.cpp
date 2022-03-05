class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        int g ;
        for(int i = 0;i<nums.size();i++){
            g = 0;
            for(int j = 0;j<nums.size();j++){
                if(nums[i]>nums[j])
                    g++;
                
            }
            ans.push_back(g);
        }
        return ans;
    }
};