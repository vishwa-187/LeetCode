class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string ans ="";
        int n = s.length();
        int d;
        for(int i = 0;i<n;i++){
          for(int j = 0;j<n;j++){
              if(indices[j]==i){
         
            ans = ans + s[j];   
          }
             
          }
        }
        return ans;
    }
};