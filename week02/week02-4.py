class Solution:
    def findTheDifference(self, s: str, t: str) -> str:
        ans=Counter(t)-Counter(s)
        return list(ans.keys())[0]