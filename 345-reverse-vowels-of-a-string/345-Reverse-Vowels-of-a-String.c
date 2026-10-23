bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e'
        || c == 'i' || c == 'o'
        || c == 'u';
}

char* reverseVowels(char* s) {
    int i = 0, j = strlen(s) - 1;
    char tmp;
    while (true) {
        while (i < j && !isVowel(s[i])) i++;
        while (i < j && !isVowel(s[j])) j--;
        if (i < j) {
            tmp = s[i];
            s[i] = s[j];
            s[j] = tmp;
            i++; j--;
        } else break;
    }
    return s;
}