#User function Template for python3
class Solution:

	# Function to find maximum
	# product subarray
	def maxProduct(self,arr, n):
		# code here
		maxn=arr[0]
		minn=arr[0]
		ans = arr[0]
		for i in range (1,n,1):
		    if (arr[i]<0):
		        t = minn
		        minn=maxn
		        maxn = t
	        maxn = max(arr[i],arr[i]*maxn)
	        minn = min(arr[i],arr[i]*minn)
	        ans = max(maxn,ans)
	    return ans
	        

#{ 
#  Driver Code Starts
#Initial Template for Python 3



if __name__ == '__main__':
    tc = int(input())
    while tc > 0:
        n = int(input())
        arr = list(map(int, input().strip().split()))
        ob = Solution()
        ans = ob.maxProduct(arr, n)
        print(ans)
        tc -= 1

# } Driver Code Ends