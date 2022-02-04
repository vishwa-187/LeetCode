class Solution:
    def buildArray(self, nums: List[int]) -> List[int]:
        ans = [None]*len(nums)
        n = len(nums)
        for i in range (n):
            ans[i]= nums[nums[i]]
            
        return ans
    
        