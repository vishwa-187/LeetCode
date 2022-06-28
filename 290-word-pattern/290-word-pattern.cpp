class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        istringstream ss(s);
        string w;
        while(ss>>w)
            words.push_back(w);
        // for(int i = 0;i<words.size();i++)
        // cout<<words[i];
        if(pattern.length()!=words.size())
            return false;
        unordered_map<string,char> m1;
        unordered_map<char,bool>m2;
        for(int i = 0;i<words.size();i++){
            // char a = pattern[i];
            // string b = words[i];
            string a = words[i];
            char b = pattern[i];
            // if(m1.find(b)!=m1.end())
            // {
            //     m1[b]=a;
            //     if(m2.find(a)!=m2.end())
            //         m2[a]=true;
            //     else
            //         return false;
            // }
            // else{
            //     if(m1[b]!=a)
            //         return false;
            //     else
            //         continue;
            
            
            
            
            if(m1.find(a)==m1.end()){ 
                //not present
                m1[a]=b;
                if(m2.find(b)==m2.end())
                m2[b]=true;
                else
                    return false;
            }
            else{
                if(m1[a]!=b  )
                    return false;
                
                else
                    continue;
            }
        }
        return true;
        
            
            
            
    }
    
};