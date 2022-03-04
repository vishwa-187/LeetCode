class Solution {
public:
    vector<int> countBits(int n) {
      vector<int> ans;
        int g;
        int j;
        int d ;
        for(int i = 0;i<n+1;i++){
            g = 0;
            j = i;
            while(j!=0){
                d = j%2;
                if(d==1)
                    g++;
                j = j/2;
            }
            ans.push_back(g);
            
        }
        return ans;
    }
};