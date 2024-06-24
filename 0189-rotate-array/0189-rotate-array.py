class Solution(object):
    def rotate(self, nums, k):
        n = len(nums)
        res = []
        i = n-k
        for j in range(n):
            res.append(nums[(i+j)%n])

        nums[:] = res
