// { Driver Code Starts
 
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string s)
	{
	     int start=0,end=s.length()-1; 
	    int flag=0;
	     
	    while(start<end)
	    {
	         if(s[start]!=s[end]) flag=1;
	         start++;
	         end--;
	    }
	     
	    if(flag==1) return 0;
	    else return 1;
	    // Your code goes here
	}

};

// { Driver Code Starts.

int main() 
{
   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		string s;
   		cin >> s;

   	    Solution ob;

   		cout << ob.isPalindrome(s) << "\n";
   	}

    return 0;
}  // } Driver Code Ends