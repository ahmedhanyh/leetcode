char* toLowerCase(char* s) {
    char* t = s;
    while (*t) {
        if (*t >= 'A' && *t <= 'Z')
            *t = *t - 'A' + 'a';
        t++;
    }
    return s;
}