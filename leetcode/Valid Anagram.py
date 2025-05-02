class Solution(object):
    def isAnagram(self, s, t):
        s = sorted(list(s))
        t = sorted(list(t))
        if s==t:
            return True
        else:
            return False
