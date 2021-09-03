class Solution {
public:
    int maxDepth(string s) {
        int n = s.length();
        int max_cur = 0;
        int max1 = 0;
        for( int i=0;i<n;i++){
            if(s[i]=='('){
                max_cur++;
            }
            else if(s[i]==')'){
                max_cur--;
            }
            max1 = max(max_cur,max1);
        }
        
        return max1;
        
    }
};