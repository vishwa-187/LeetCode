class Solution {
public:
    int heightChecker(vector<int>& h) {
        int n= h.size();
        vector<int> exp(n);
        for( int i =0;i<n;i++){
            exp[i]=h[i];
        }
        sort(exp.begin(),exp.end());
        int ans=0;
        for( int i =0;i<n;i++){
            if( exp[i]!=h[i])
                ans++;
        }
        
        return ans;
    }
};