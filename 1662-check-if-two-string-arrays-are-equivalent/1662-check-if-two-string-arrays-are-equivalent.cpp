class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        
        int n = word1.size();
        int m = word2.size();
        string a1="";
        string a2="";
        bool f;
        for(int i=0;i<n;i++){
            a1 = a1 + word1[i];
        }
        for(int i=0;i<m;i++){
            a2 = a2 + word2[i];
        }
        
        if(a1==a2){
            f= true;
            
        }
        else{
            f = false;
        }
        return f;     
        
    }
};