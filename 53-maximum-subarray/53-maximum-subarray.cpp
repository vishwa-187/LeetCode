class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        int temp = -1000000;
        for( int i = 0;i<n;i++){
            int sum = 0;
            for( int j =i;j<n;j++){
                sum = sum + nums[j];
                if( sum > temp){
                    temp= sum;
                }
                    
                
            }
        }
        
        return temp;
        
        
        
    }
};