char* truncateSentence(char* s, int k) {
    char *t;
    for (t = s; *t; t++) {
        if (*t == ' ') {
            k--;
            if (k == 0) {
                *t = '\0';
                break;
            }
        }
    }
    return s;
}