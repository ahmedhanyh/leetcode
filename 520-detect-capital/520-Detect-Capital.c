bool detectCapitalUse(char* word) {
    int length = strlen(word), count = 0;
    for (int i = 0; i < length; i++) {
        if (isupper(word[i]))
            count++;
    }
    if (count == 0 || count == length) {
        return true;
    } else if (count == 1 && isupper(word[0])) {
        return true;
    }
    return false;
}