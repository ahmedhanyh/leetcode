char **split(char *s, int *sSize) {
    int partsSize = 1;
    char **parts = calloc(partsSize, sizeof(char *));
    parts[partsSize - 1] = calloc(50, sizeof(char));
    int partIndex = 0;
    for (int i = 0; s[i]; i++) {
        if (s[i] == ' ') {
            partsSize++;
            parts = reallocarray(parts, partsSize, sizeof(char *));
            parts[partsSize - 1] = calloc(50, sizeof(char));
            partIndex = 0;
            i++;
        }
        parts[partsSize - 1][partIndex++] = s[i];
    }
    *sSize = partsSize;
    return parts;
}

bool wordPattern(char* pattern, char* s) {
    int patternSize = strlen(pattern);
    int numWords;
    char **words = split(s, &numWords);
    if (patternSize != numWords) return false;

    char **mappings[26] = { 0 };

    for (int i = 0; i < patternSize; i++) {
        if (mappings[pattern[i] - 'a']) {
            if (strcmp(*mappings[pattern[i] - 'a'], words[i]))
                return false;
        } else {
            for (int m = 0; m < 26; m++)
                if (mappings[m] && strcmp(*mappings[m], words[i]) == 0)
                    return false;
            mappings[pattern[i] - 'a'] = &words[i];
        }
    }

    return true;
}