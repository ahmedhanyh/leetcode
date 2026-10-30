int firstUniqChar(char* s) {
    char seen[26] = { 0 };
    int i, j;
    for (i = 0; s[i]; i++) {
        if (seen[s[i] - 'a'])
            continue;
        for (j = i + 1; s[j]; j++) {
            if (s[i] == s[j]) {
                seen[s[i] - 'a'] = 1;
                break;
            }
        }
        if (!seen[s[i] - 'a']) return i;
    }
    return -1;
}