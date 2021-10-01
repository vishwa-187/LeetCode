// { Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
     // Function to find majority element in the array
    // a: input array
    // size: size of input array
    int majorityElement(int a[], int size)
    {
        
        // your code here
        map<int,int> m;
        for(int i =0;i<size;i++)
        m[a[i]]++;
    // your code here
        int temp = -1;
        for(auto i:m){
            if(temp<i.second && i.second>(size/2))
            temp = i.second;
            
        }
        int ans = -1;
        for(auto i:m){
            if(i.second == temp)
            ans = i.first;
        }
        return ans;
        
    }
};

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        Solution obj;
        cout << obj.majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends