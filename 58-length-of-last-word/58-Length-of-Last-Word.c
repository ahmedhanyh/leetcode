int lengthOfLastWord(char* s) {
    if (!*s) return 0;
    int len = 0;
    char *s_end = s;
    while (*s_end) s_end++;
    s_end--;
    while (s_end != s - 1 && isspace(*s_end))
        s_end--;
    while (s_end != s - 1 && !isspace(*s_end)) {
        s_end--;
        len++;
    }
    return len;
}