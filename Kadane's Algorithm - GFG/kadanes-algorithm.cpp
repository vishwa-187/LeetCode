// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        long long sum = 0;
        long long ref = INT_MIN;
        int i,j;
        // for(i = 0 ;i<n ;i++){
        //     sum = 0;
        //     for(j = i;j<n;j++){
        //         sum = sum + arr[j];
        //         ref = max(sum , ref);
        //     }
        // }
        // // Your code here
        for(i =0;i<n;i++){
            sum = sum + arr[i];
            if(sum > ref)
            ref = sum;
            if(sum < 0)
            sum = 0;
        }
        
        
        
        return ref;
        
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {
        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends