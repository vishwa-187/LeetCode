class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i = 0;i<n;i++){
            sum = sum +nums[i];
        }
        int ans = -1;
        int temp = 0;
        int temp2=sum;
        for(int i = 0;i<n;i++){
            temp= temp +nums[i];
            
            if(temp == temp2){
                ans = i;
                break;
            }
                
            temp2 = temp2 - nums[i];
        }
        return ans;
    }
};