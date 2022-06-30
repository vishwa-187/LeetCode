class Solution {
public:
    string removeDuplicates(string s) {
        // stack<char> st;
        // int n = s.length();
        // st.push(s[0]);
        // for(int i = 1;i<n;i++){
        //   if(!st.empty() && st.top()==s[i] )
        //         st.pop();
        //     else
        //         st.push(s[i]);
        // }
        // s.erase();
        // s ="";
        // //string ans = "";
        // while(!st.empty()){
        //     s = s+st.top();
        //     st.pop();
        // }
        // reverse(s.begin(),s.end());
        // return s;
        
         int n = s.size();
        stack<char> st;
        st.push(s[0]);
        for(int i=1;i<n;i++)
        {
            
            if(!st.empty())
            {
                char c=st.top();
                
                if(c==s[i])
                {
                    st.pop();
                }
                else
                {
                    st.push(s[i]);
                }
            }
            else
            {
                st.push(s[i]);
            }
           
        }
        string r="";
        while(st.empty()==false)
        {
            char c = st.top();
            st.pop();
            r+=c;
        }
        reverse(r.begin(),r.end());
        return r;
        
    }
};