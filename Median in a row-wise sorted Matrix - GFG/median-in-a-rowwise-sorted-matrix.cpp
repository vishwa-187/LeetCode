// { Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution{   
public:
    int median(vector<vector<int>> &m, int r, int c){
        vector<int> ans;
        int med;
        for(int i = 0;i<r;i++){
            for( int j = 0 ;j<c;j++){
                ans.push_back(m[i][j]);
            }
        }
        // code here
        int d = ans.size()/2 ;
        sort(ans.begin(),ans.end());
        if(ans.size() %2==0 ){
            med = (ans[d] + ans[d+1])/2 ;
        }
        else{
            med = ans[(ans.size()-1)/2];
        }
        return med;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        vector<vector<int>> matrix(r, vector<int>(c));
        for(int i = 0; i < r; ++i)
            for(int j = 0;j < c; ++j)
                cin>>matrix[i][j];
        Solution obj;
        cout<<obj.median(matrix, r, c)<<endl;        
    }
    return 0;
}  // } Driver Code Ends