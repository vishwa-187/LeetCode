class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n = nums.size();
        int ans = 1;
        sort(nums.begin(),nums.end());
        for( int i =2 ;i<nums[n-1] +1 ;i++){
            if(nums[0]%i==0 && nums[n-1]%i==0 ){
                if(i > ans){
                    ans = i;
                }
                
                
            }
            else{
                continue;
            }
                
            
            
        } 
        return ans;
    }
};