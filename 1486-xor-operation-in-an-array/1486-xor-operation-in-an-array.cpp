class Solution {
public:
    int xorOperation(int n, int start) {
        int xora=0;
        for( int i =0;i<n;i++){
            
            int f = start + 2*i;
            xora = xora^f;
            
        }
        return xora;
    }
};