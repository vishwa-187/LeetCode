class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
         vector<int>::iterator it;
        int n = nums1.size();
        int m = nums2.size();
        for( int i=0;i<n;i++){
            for( int j =0;j<m;j++){
                if( nums1[i] == nums2[j]){
                    
                            ans.push_back(nums1[i]);
                    
                }
                    
            }
        }
        
//         sort(ans.begin(),ans.end());
        
//         for( int i =1;i<ans.size();i++){
//             if(ans[i-1]==ans[i])
//             ans.erase(ans.begin()+ i, ans.begin()+i+1);
//         }
        sort(ans.begin(),ans.end()); 
        it = unique(ans.begin(),ans.begin() + ans.size());
        ans.resize(distance(ans.begin(), it));
        
        return ans;
        
    }
};