class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> first(n);
        vector<int> sec(n);
        vector<int> ans;
        int i =0;
        for( int i =0 ;i <n;i++){
            first[i] = nums [i];
            sec[i] = nums[ n + i];
        }
        while( i<n){
            ans.push_back(first[i]);
            ans.push_back(sec[i]);
            i++;
        }
            
        return ans;
        
    }
};