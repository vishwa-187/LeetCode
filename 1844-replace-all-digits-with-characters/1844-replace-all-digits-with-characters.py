class Solution:
    def replaceDigits(self, s: str) -> str:
        ans =''
        for i in range (0,len(s)):
            if ord(s[i])>=96 and ord(s[i])<=123:
                ans = ans + s[i]
            else:
                ans = ans + chr(ord(s[i-1])+int(s[i]))
        return ans
        