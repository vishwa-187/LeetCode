class Solution {
public:
    int tribonacci(int n) {
        // if(n==0)
        //     return 0;
        // else if(n==1 || n==2)
        //     return 1;
        // else{
        //     vector<int> arr(n+1);
        //     arr[0]=0;
        //     arr[1]=1;
        //     arr[2]=1;
        //     for(int i = 0;i<=n;i++){
        //         arr[i+3] = arr[i]+arr[i+2]+arr[i+3];
        //     }
        //     return arr[n+3];
        if (n == 0)
            return n;
        if (n == 1 || n == 2)
            return 1;
        int dp[n + 1];
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 1;
        for (int i = 3; i < n + 1; i++)
            dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
        return dp[n];
        
        
        
    }
};