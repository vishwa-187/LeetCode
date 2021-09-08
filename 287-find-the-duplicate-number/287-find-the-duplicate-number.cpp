class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        int ans1;
        vector<int> ans(100002,0);
        for( int i =0;i<n;i++){
            int k = nums[i];
            ans[k]++;
        }
        for( int j=0;j<100002;j++){
            if(ans[j]==2 or ans[j]>2){
                ans1 = j;
            }
        }
        return ans1;
    }
};