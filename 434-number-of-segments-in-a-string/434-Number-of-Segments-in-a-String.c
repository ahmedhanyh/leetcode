int countSegments(char* s) {
    int numSegments = 0;
    for (int i = 0; s[i]; i++) {
        if (s[i] != ' ' && (i == 0 || s[i - 1] == ' '))
            numSegments++;
    }
    return numSegments;
}