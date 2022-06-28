class Solution {
public:
    bool isIsomorphic(string s, string t) {
      int n = s.length();
        int m = t.length();
        if(n!=m)
            return false;
        unordered_map<char,char> m1;
        unordered_map<char,bool> m2;
        
        for(int i= 0;i<n;i++)
        {
            char a = s[i];
            char b = t[i];
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