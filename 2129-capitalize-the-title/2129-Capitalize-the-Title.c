void toLowerCase(char* s) {
    while (*s && *s != ' ') {
        *s = tolower(*s);
        s++;
    }
}

char* capitalizeTitle(char* title) {
    char* start, *end;
    start = end = title;
    while (true) {
        while (*end && *end != ' ') end++;
        if (end - start > 2) {
            *start = toupper(*start);
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