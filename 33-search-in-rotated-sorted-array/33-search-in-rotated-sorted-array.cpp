class Solution {
public:
    int search(vector<int>& nums, int target) {
        int ans;
        for(int i = 0;i<nums.size();i++){
            if(target == nums[i]){
                ans = i;
                break;
            }
             else{
                 ans = -1;
             }   
                
                
        }
        return ans;
    }
};