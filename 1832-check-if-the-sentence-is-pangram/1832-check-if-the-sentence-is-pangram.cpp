class Solution {
public:
    bool checkIfPangram(string se) {
        map<char,int>m1;
        int n = se.length(); 
        for(int i =0;i<n;i++){
            m1[se[i]]++;
        }
        if(m1.size()>=26)
            return true;
        else
            return false;
    }
};