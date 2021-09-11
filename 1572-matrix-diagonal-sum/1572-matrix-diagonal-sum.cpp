class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int sum = 0;
        int m = mat[0].size();
        for( int i=0;i<n;i++){
            for( int j=0;j<m;j++){
                if(i == j || i + j == n - 1){
                    sum = sum + mat[i][j];
                }
            }
        }
        
        return sum;
        
    }
};