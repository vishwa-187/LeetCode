class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        bool f = false;
        for(int i = 1;i<nums.size();i++){
            if(nums[i-1]==nums[i]){
               f = true;
                break;
            }
            
                
            
            
        }
        return f;
        
    }
};