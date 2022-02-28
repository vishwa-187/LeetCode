class Solution {
public:
    bool areOccurrencesEqual(string s) {
       map<char,int> m;
        bool b;
    for(int i =0;i<s.length();i++){
        m[s[i]]++;
           }
        for(auto i:m){
            for(auto j:m){
                if(i.second == j.second)
                    b = true;
                else{
                    b= false;
                    break;
                }
            }
        }
        return b;
    }
};