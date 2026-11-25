int reverseDegree(char* s) {
    int degree = 0;
    for (int i = 0; s[i]; i++) {
        degree += ('z' - s[i] + 1) * (i + 1);
    }
    return degree;
}