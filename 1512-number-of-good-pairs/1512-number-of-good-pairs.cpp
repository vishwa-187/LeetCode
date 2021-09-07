class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int good =0;
        int n = nums.size();
        for( int i=0;i<n;i++){
            for( int j =0;j<n;j++){
                if(i<j && nums[i]==nums[j])
                    good++;
            }
        }
        return good;
    }
};