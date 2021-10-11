
class Solution {
public:
    int getMaximumGenerated(int n) {
        vector<int> nums(n+1);
        if(n==0)
            return 0;
        else{
            
        for(int i = 0;i<n+1;i++){
            if(i == 0 || i==1){
                nums[0]=0;
                nums[1]=1;
            }
            else{
               if(i%2==0){
                   nums[i] = nums[i/2];
               }
                else{
                    nums[i] = nums[(i-1)/2] + nums[((i-1)/2)+1];
                }
            }
        }
        for(int i =0;i<nums.size();i++)
            cout<<nums[i]<<" ";
        int g = *max_element(nums.begin(), nums.end());
        return g;
        }
        
    }
};