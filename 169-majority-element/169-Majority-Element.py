class Solution:
    def majorityElement(self, nums: list[int]) -> int:
        length = len(nums)
        nums_sorted = sorted(nums)
        count = 0
        for i in range(length):
            count += 1
            if i == length - 1 or nums_sorted[i] != nums_sorted[i + 1]:
                if count > length // 2:
                    return nums_sorted[i]
                count = 0
        return -1
