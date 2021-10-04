class Solution {
public:
    bool divisorGame(int n) {
//         if(n==1)
//             return false;
//         else
//         {
//             int x;
//             for(int i = 1;i<n;i++){
//                 if(n%i==0)
//                     x = i;
//                     break;
//             }
//             return divisorGame(n-x);
            
//         }
        if(n%2==0)
            return true;
        else
            return false;
            
        
    }
};