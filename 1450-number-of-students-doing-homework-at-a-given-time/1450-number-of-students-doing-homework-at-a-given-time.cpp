class Solution {
public:
    int busyStudent(vector<int>& s, vector<int>& e, int q) {
        int n = s.size();
        int ans = 0;
        for(int i = 0;i<n;i++){
            if(q>=s[i] && e[i]>=q)
                ans++;
            
        }
        return ans;
    }
};