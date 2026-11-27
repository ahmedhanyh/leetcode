char* truncateSentence(char* s, int k) {
    int i;
    for (i = 0; s[i]; i++) {
        if (i == 0 || s[i - 1] == ' ') {
            k--;
            if (k < 0) break;
        }
    }
    if (s[i]) s[i - 1] = '\0';
    return s;
}