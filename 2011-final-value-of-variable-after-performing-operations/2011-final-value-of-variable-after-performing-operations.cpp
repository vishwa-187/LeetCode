class Solution {
public:
    int finalValueAfterOperations(vector<string>& op) {
        int x =0;
        for(int i =0 ;i<op.size();i++){
            if(op[i]=="++X" || op[i]=="X++")
                x++;
            else if(op[i]=="--X" || op[i]=="X--")
                x=x-1;
                
        }
        
        return x;
        
    }
};