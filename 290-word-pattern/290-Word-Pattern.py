class Solution:
    def wordPattern(self, pattern: str, s: str) -> bool:
        words_in_s = s.split()
        length = len(pattern)
        if length != len(words_in_s):
            return False

        pattern_to_word = {}

        for i in range(length):
            if pattern[i] in pattern_to_word.keys():
                if pattern_to_word[pattern[i]] != words_in_s[i]:
                    return False
            else:
                if words_in_s[i] in pattern_to_word.values():
                    return False
                pattern_to_word[pattern[i]] = words_in_s[i]

        return True
