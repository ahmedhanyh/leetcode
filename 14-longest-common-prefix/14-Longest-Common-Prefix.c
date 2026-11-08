char* longestCommonPrefix(char** strs, int strsSize) {
    char *prefix = NULL;
    int shortestLength = strlen(strs[0]);

    int length;
    for (int i = 1; i < strsSize; i++) {
        length = strlen(strs[i]);
        if (length < shortestLength)
            shortestLength = length;
    }

    prefix = calloc(shortestLength + 1, sizeof(char));
    for (int i = 0; i < shortestLength; i++) {
        for (int j = 0; j < strsSize; j++) {
            if (strs[j][i] != strs[0][i]) {
                return prefix;
            }
        }
        strncat(prefix, strs[0] + i, 1);
    }
    return prefix;
}