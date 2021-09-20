class Solution {
public:
    int balancedStringSplit(string s) {
        int p=0;
        int ans =0;
        int n = s.length();
        for(int i =0;i<n;i++){
            if(s[i]=='R')
                p--;
            else if(s[i]=='L')
                p++;
            if(p == 0)
                ans++;
        }
        
        return ans;
        
    }
};