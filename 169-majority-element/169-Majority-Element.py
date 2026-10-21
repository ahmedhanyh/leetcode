class Solution:
    def majorityElement(self, nums: list[int]) -> int:
        length = len(nums)
        nums.sort()
        count = 0
        for i in range(length):
            count += 1
            if i == length - 1 or nums[i] != nums[i + 1]:
                if count > length // 2:
                    return nums[i]
                count = 0
        return -1
