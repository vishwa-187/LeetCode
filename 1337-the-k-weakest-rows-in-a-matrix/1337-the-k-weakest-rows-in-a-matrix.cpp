class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int m = mat.size();
        int n = mat[0].size();
        vector<int> ans;
        vector<int> ans1;
        for(int i = 0;i<m;i++){
            int count = 0;
            for(int j = 0;j<n;j++){
                if(mat[i][j]==1)
                    count++;
                
            }
            ans.push_back(count);
            
        }
        
        while(ans1.size()<k){
            int k = *min_element(ans.begin(), ans.end());
            for(int i = 0;i<ans.size();i++){
                if(ans[i]==k){
                    ans1.push_back(std::min_element(ans.begin(),ans.end()) - ans.begin());
                    ans[i]=100;
                    break;
                }
            }
            
        }
        return ans1;
    }
};