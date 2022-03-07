class Solution {
public:
    bool checkIfPangram(string s) {
       
        int count =0;
        sort(s.begin(),s.end());
        for(int i = 0;i<s.length();i++){
            if(s[i]!=s[i+1])
                count++;
        }
        if(count==26)
            return true;
        else
            return false;
            
    }
};