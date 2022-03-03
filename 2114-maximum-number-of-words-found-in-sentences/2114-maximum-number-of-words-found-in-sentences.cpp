class Solution {
public:
    int mostWordsFound(vector<string>& se) {
        int n = se.size();
        vector<int> l;
        int f;
        int g;
        for(int i = 0;i<n;i++){
            g = 0;
            f = se[i].length();
            for(int j = 0;j<f;j++)
                if(se[i][j]==' ')
                    g++;
            l.push_back(g+1);
               
            
        }
        int ans = *max_element(l.begin(),l.end());
        return ans;
    }
};