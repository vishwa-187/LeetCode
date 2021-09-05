class Solution {
public:
    int maximumWealth(vector<vector<int>>& acc) {
        int n = acc.size();
        int m = acc[0].size();
        int temp = 0, sum =0;
        for(int i = 0;i<n;i++){
            sum = 0;
            for(int j = 0;j<m;j++){
                sum = sum + acc[i][j];
            }
            
            if(sum > temp)
                temp =sum;
        }
        
        return temp;
        
    }
}; 