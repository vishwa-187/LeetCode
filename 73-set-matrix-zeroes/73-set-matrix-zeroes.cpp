class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        vector<vector<int>> temp;
        int n = mat.size();
        int m = mat[0].size();
        
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(mat[i][j]==0)
                    temp.push_back({i,j});
            }
        }
        for(auto i:temp){
            int a = i[0];
            int b = i[1];
            
            for(int j = 0;j<m;j++){
                mat[a][j]=0;
                
            }
            for(int j = 0;j<n;j++){
                mat[j][b]=0;
            }
        }
        
    }
};