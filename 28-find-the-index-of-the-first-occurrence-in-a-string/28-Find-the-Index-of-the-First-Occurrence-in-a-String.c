int strStr(char* haystack, char* needle) {
    int needleLen = strlen(needle);
    int haystackLen = strlen(haystack);
    for (int i = 0; i <= haystackLen - needleLen; i++) {
        if (strncmp(haystack + i, needle, needleLen) == 0)
            return i;
    }
    return -1;
}