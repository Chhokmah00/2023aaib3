#在一堆草堆裡haystack，找到一根針needle
#在python只要一行 a.find(b) 在在字串a裡找到字串b
class Solution:
    def strStr(self, haystack: str, needle: str) -> int:
        return haystack.find(needle)