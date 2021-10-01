class Solution {
public:
    bool isSubsequence(string s, string t) {
//         bool b = false;
//         int  i =0;
//         int j =0;
//         while(i<s.length() && j<t.length()){
//             if(s[i]==t[j]){
//                 i++;
//                 j++;
//             }
//             else
//                 j++;
//             if(i == s.length())
//                 b = true;
//             else
//                 b = false;
            
//         }
//         return b;
        
    int i = 0;
    int j = 0;
    while (i < s.length() && j < t.length()) {
        if (s[i] == t[j]) {
            i++;
            j++;
        }
        else {
            j++;
        }
    }
    if (i == s.length()) {
        return true;
    }
    else {
        return false;
    }
}
};