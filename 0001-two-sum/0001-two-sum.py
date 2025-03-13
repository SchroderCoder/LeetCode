class Solution(object):
    def twoSum(self, nums, target):
        hash = {} 
        for i, num in enumerate(nums):
            hash[num] = i
        
        for i, num in enumerate(nums):
            desired = target - num
            if desired in hash and hash[desired] != i:
                return i, hash[desired]
        