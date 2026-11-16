char* toLowerCase(char* s) {
    char* t = s;
    while (*t && *t != ' ') {
        if (*t >= 'A' && *t <= 'Z')
            *t = *t - 'A' + 'a';
        t++;
    }
    return s;
}

char* capitalizeTitle(char* title) {
    char* start, *end;
    start = end = title;
    while (*end) {
        while (*end && *end != ' ') end++;
        if (end - start > 2) {
            if (*start >= 'a' && *start <= 'z')
                *start = *start - 'a' + 'A';
            toLowerCase(start + 1);
        } else {
            toLowerCase(start);
        }
        if (!*end) break;
        end++;
        start = end;
    }
    return title;
}