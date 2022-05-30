// { Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution {
public:
    int maxSubStr(string str){
        //Write your code here
        int temp = 0;
        int ans = 0;
        for(int i = 0;i<str.length();i++){
            if(str[i]=='0')
            temp++;
            else if(str[i]=='1')
            temp--;
            
            if(temp == 0)
            ans++;
        }
        if(temp != 0)
        ans = -1;
        return ans;
    }
};


// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    string str;
	    cin >> str;
	    Solution ob;
	    int ans = ob.maxSubStr(str);
	    cout << ans<<endl;
	}
	return 0;
}
  // } Driver Code Ends