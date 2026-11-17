bool allUppercase(char *s) {
    while (*s) {
        if (islower(*s))
            return false;
        s++;
    }
    return true;
}

bool allLowercase(char *s) {
    while (*s) {
        if (isupper(*s))
            return false;
        s++;
    }
    return true;
}

bool detectCapitalUse(char* word) {
    if (isupper(word[0])) {
        return allUppercase(word + 1) || allLowercase(word + 1);
    } else {
        return allLowercase(word + 1);
    }
    return true;
}