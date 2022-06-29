class Solution {
public:
    int titleToNumber(string columnTitle) {
        int c = 0;
       for(int i = 0;i<columnTitle.length();i++){
           int g = int(columnTitle[i])-64;
           c = g + c*26;
           
       } 
        return c;
    }
};