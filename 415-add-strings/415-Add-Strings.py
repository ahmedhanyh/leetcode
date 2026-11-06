class Solution:
    def addStrings(self, num1: str, num2: str) -> str:
        result = ""

        d1 = len(num1) - 1
        d2 = len(num2) - 1

        carry = 0

        while d1 >= 0 or d2 >= 0 or carry:

            sum = 0

            if d1 >= 0:
                sum += int(num1[d1])
            if d2 >= 0:
                sum += int(num2[d2])

            sum += carry

            result += str(sum % 10)

            carry = sum // 10

            d1 -= 1
            d2 -= 1

        return result[::-1]
