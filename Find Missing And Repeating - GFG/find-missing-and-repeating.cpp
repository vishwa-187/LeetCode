// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

 // } Driver Code Ends
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        
        int* ans = new int[2];
        vector<int> ans1(n+1,0);
        vector<int> as;
        int mis=0,dup = 0;
        for(int i = 0;i<n;i++)
        ans1[arr[i]]++;
        for(int j = 1;j<n+1;j++){
            if(ans1[j]==0) 
            mis = j;
            if(ans1[j]>1)
            dup = j;
        }
        
       ans[0]=dup;
       ans[1]= mis;
       
       return ans;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        Solution ob;
        auto ans = ob.findTwoElement(a, n);
        cout << ans[0] << " " << ans[1] << "\n";
    }
    return 0;
}  // } Driver Code Ends