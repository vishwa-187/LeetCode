#User function Template for python3

class Solution:
    def factorial(self, N):
        
        num = 1 ;
        while N>0:
           num = num * N
           N = N - 1
        return [num]
        #code here

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    t=int(input())
    for _ in range(t):
        N = int(input())
        ob = Solution()
        ans = ob.factorial(N);
        for i in ans:
            print(i,end="")
        print()
    
# } Driver Code Ends