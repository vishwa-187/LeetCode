class Solution {
public:
    bool halvesAreAlike(string s) {
        int f = 0;
        int l = 0;
        int i =0;
        int j = s.size()-1;
        while(i < j){
            if(s[i]=='A' ||s[i]=='E' ||s[i]=='I' ||s[i]=='O' ||s[i]=='U' ||s[i]=='a' ||s[i]=='e' ||s[i]=='i' ||s[i]=='o' ||s[i]=='u')
                f++;
            if((s[j]=='A' ||s[j]=='E' ||s[j]=='I' ||s[j]=='O' ||s[j]=='U' ||s[j]=='a' ||s[j]=='e' ||s[j]=='i' ||s[j]=='o' ||s[j]=='u'))
                l++;
            i++;
            j--;
        }
        if(l==f)
            return true;
        else
            return false;
        
        
       
    }
};