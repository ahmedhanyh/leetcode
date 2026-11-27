class Solution:
    def recoverOrder(self, order: List[int], friends: List[int]) -> List[int]:
        return [o for o in order if o in friends]