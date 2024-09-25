class Solution:
    def repeatedSubstringPattern(self, s: str) -> bool:
        s2=s+s #把字串s+s變成兩倍
        s2=s2[1:len(s2)-1] #左少1，又少1
        if s in s2: return True
        else: return False