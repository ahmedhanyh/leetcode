int singleRow(char *word) {
    int charToRow[] = { 2, 3, 3, 2, 1, 2, 2, 2, 1, 2, 2, 2, 3
                      , 3, 1, 1, 1, 1, 2, 1, 1, 3, 1, 3, 1, 3 };
    int rows[3] = { 0 };
    for (int len = 0; word[len]; len++) {
        rows[charToRow[tolower(word[len]) - 'a'] - 1] = 1;
    }
    return rows[0] + rows[1] + rows[2] == 1;
}

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** findWords(char** words, int wordsSize, int* returnSize) {
    char **result = malloc(wordsSize * sizeof(char *));
    int resultSize = 0;
    for (int i = 0; i < wordsSize; i++) {
        if (singleRow(words[i])) {
            result[resultSize] = malloc(101 * sizeof(char));
            strcpy(result[resultSize], words[i]);
            resultSize++;
        }
    }
    *returnSize = resultSize;
    return result;
}
