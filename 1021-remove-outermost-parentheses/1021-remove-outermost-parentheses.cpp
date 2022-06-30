class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.length();
        stack<char> st;
        string ans = "";
        for(int i = 0;i<n;i++){
            if(s[i]=='(' && st.size()==0)
            {
                st.push(s[i]);
            }
            else if(s[i]==')' && st.size()==1)
                st.pop();
            else {
                ans = ans +s[i];
                if(s[i]=='(')
                    st.push(s[i]);
                else
                    st.pop();
            }
        }
        return ans;
    }
};