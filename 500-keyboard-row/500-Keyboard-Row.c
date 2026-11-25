int singleRow(char *word) {
    char firstRow[] = "qwertyuiop";
    char secondRow[] = "asdfghjkl";
    char thirdRow[] = "zxcvbnm";
    int first = 0, second = 0, third = 0;

    for (int i = 0; word[i]; i++) {
        for (int j = 0; j < 10; j++) {
            if (firstRow[j] == tolower(word[i])) {
                first = 1;
                break;
            }
        }
        for (int j = 0; j < 9; j++) {
            if (secondRow[j] == tolower(word[i])) {
                second = 1;
                break;
            }
        }
        for (int j = 0; j < 7; j++) {
            if (thirdRow[j] == tolower(word[i])) {
                third = 1;
                break;
            }
        }
    }

    return first + second + third == 1;
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
