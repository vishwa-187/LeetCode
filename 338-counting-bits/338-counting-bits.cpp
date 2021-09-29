class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> noob;
        for(int i =0;i<=n;i++){
             noob.push_back( __builtin_popcount(i));

        }
        return noob;
    }
};