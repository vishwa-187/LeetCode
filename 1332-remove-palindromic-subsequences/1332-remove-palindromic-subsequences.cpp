class Solution {
public:
    int removePalindromeSub(string s) {
        if(s=="")
            return 0;
        else{
            bool b = false;
            int f = 0;
            int bk = s.length()-1;
            while(bk>f){
               if(s[f]==s[bk]) 
               {
                   f++;
                   bk--;
                   continue;
                   
               }
                else{
                    return 2;
                    break;
                }
}
        }
        return 1;
        
    }
};