class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> sfs;
        stack<char> sft;
        bool res=true;
        for( int i =0;i<s.length();i++){
            if(s[i]=='#'){
                if(sfs.empty()==false)
                    sfs.pop();
                else{
                    continue;
                }
            }
                
            else
                sfs.push(s[i]);
        }
        for( int i =0;i<t.length();i++){
            if(t[i]=='#'){
                if(sft.empty()==false)
                    sft.pop();
                else{
                    continue;
                }
            }
                
            else
                sft.push(t[i]);
        }
        if(sfs.size()!=sft.size()){
            res=false;
            return res;
        }
            
            
        while(sfs.empty()==false){
            if(sfs.top()==sft.top()){
                sfs.pop();
                sft.pop();
            }
            else{
                res=false;
                break;
            }
        }
        
        return res;
        
    }
};