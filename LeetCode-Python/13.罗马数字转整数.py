# _*_ coding: UTF-8 _*_
# 2020/5/20 11:37 
# PyCharm  
# Create by:LIUMINXUAN
# E-mail:liuminxuan1024@gmail.com


class Solution(object):
    def romanToInt(self,s):
        """
        :rtype: int
        """
        Roman = {'I': 1, 'V': 5, 'X': 10, 'L': 50, 'C': 100, 'D': 500, 'M': 1000}
        p = 0
        ans = 0


t = Solution()
s = "IV"
t.romanToInt()
