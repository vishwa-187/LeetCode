class Solution {
public:
    double average(vector<int>& s) {
        sort(s.begin(),s.end());
        double sum =0;
        for( int i =1;i < (s.size() - 1) ;i++){
            sum = sum + s[i];
        }
        double ans = sum/(s.size()-2);
        
        return ans;
        
    }
};