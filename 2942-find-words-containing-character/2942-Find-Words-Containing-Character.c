bool charInWord(char *s, char c) {
    while (*s) if (*s++ == c) return true;
    return false;
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {
    int *indices = malloc(wordsSize * sizeof(int));
    *returnSize = 0;
    for (int i = 0; i < wordsSize; i++) {
        if (charInWord(words[i], x))
            indices[(*returnSize)++] = i;
    }
    return indices;
}