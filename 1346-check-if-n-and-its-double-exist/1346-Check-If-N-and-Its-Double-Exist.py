class Solution:
    def checkIfExist(self, arr: list[int]) -> bool:
        table = {}
        for i in range(len(arr)):
            table[arr[i]] = i
        for i in range(len(arr)):
            if arr[i] * 2 in table and table[arr[i] * 2] != i:
                return True
        return False