class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n= nums.size();
        vector<int> ans;
        for( int i =0 ;i<n ; i++){
            int k = index[i];
            ans.insert(ans.begin() + k,nums[i]);   
            }
    
    return ans;
        
    }
};