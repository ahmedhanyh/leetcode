class Solution:
    def twoSum(self, nums: list[int], target: int) -> list[int]:
        numsToIndices = {}
        for i in range(len(nums)):
            numsToIndices[nums[i]] = i
        for i in range(len(nums)):
            diff = target- nums[i]
            if diff in numsToIndices and numsToIndices[diff] != i:
                return [i, numsToIndices[diff]]
        return []

