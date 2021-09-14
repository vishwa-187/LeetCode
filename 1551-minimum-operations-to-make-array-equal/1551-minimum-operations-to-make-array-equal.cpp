class Solution {
public:
    int minOperations(int n) {
        vector<int> arr(n,0);
        for(int i =0;i<n;i++){
            arr[i] = (2*i) + 1;
        }
        int ans=0;
        
        if( n % 2 != 0){
            n--;
            for(int i =1;i<(n/2) +1;i++){
                ans = ans + 2*i;
            }
            
        }
        else{
            for(int i =0;i<n/2 ; i++){
                ans = ans + (2*i) + 1;
            }
        }
         return ans;
    }
   
};