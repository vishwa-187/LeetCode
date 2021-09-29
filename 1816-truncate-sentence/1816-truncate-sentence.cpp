class Solution {
public:
    string truncateSentence(string s, int k) {
        vector<string> finl;
        istringstream ss(s);
        string ans="";
        string word;
        while(ss>>word)
            finl.push_back(word);
        if(finl.size()>k){
             for(int i = 0;i<k;i++)
                ans = ans+finl[i]+" ";
            
        }
        else{
            for(int i = 0;i< finl.size();i++)
                ans = ans+ finl[i]+" ";
        }
        ans.pop_back();
         return ans;  
    }
};