class Solution {
public:
    int firstUniqChar(string s) {
//         int n= s.length();
//         int i, r=-1;
//         for( i = 0;i<n;i++){
//             for(int j= i;j<n;j++){
//                 while(r!=-1){
//                     if(s[i]!=s[j])
//                         r=1;
//                     else{
//                         r=-1; 
//                         break;
//                     }
                         
//                 }
                
//                 if( r==1){
//                     return i;
//                     break;
//                 }
//                 else
//                     continue;
                    
//                 }  
//             }
    
//         return r;
        
        map<char, int> m;
        for(int i = 0; i < s.length(); i++)
            m[s[i]]++;
        for(int i = 0; i < s.length(); i++) {
            if(m[s[i]] == 1)
                return i;
        }
        return -1;
    }
};