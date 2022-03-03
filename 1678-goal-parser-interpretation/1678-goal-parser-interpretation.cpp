class Solution {
public:
    string interpret(string c) {
       int n = c.length();
    string s = "";
        for(int i = 0;i<n;i++){
            if(c[i]=='G')
                s = s+ 'G';
            else if(c[i]=='(' && c[i+1]==')')
                s = s + 'o';
            else if(c[i]=='(' && c[i+1]=='a')
                s = s + "al";
            else
                continue;
        }
        return s;
    }
};