class Solution {
public:
    int canBeTypedWords(string text, string broken) {
       vector<string> finl;
        istringstream ss(text);
        string word;
        int ans = 0;
        int temp = 0;
        while(ss>>word)
            finl.push_back(word);
       for(int i = 0;i<finl.size();i++){
           temp = 0;
           for(int j = 0 ;j< broken.length();j++){
               if(finl[i].find(broken[j]) != string::npos){
                   temp = 1;
               }                   
           }
           if(temp ==1)
               ans++;
           
       }
    
        return (finl.size()-ans);
    }
};