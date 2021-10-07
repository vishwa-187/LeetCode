class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int c;
        int a = 0;
        for(int i = 0;i<n;i++){
            c =0 ;
            while(nums[i] > 0){
                c++;
                nums[i]=nums[i]/10;
                
            }
            if(c%2==0)
                a++;
        }
        return a;
    }
};