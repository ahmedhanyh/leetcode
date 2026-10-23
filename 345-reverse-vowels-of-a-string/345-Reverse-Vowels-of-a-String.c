bool isVowel(char c) {
    c = tolower(c);
    return c == 'a' || c == 'e'
        || c == 'i' || c == 'o'
        || c == 'u';
}

char* reverseVowels(char* s) {
    int i = 0, j = strlen(s) - 1;
    char tmp;
    while (i < j) {
        if (!isVowel(s[i])) i++;
        else if (!isVowel(s[j])) j--;
        else {
            tmp = s[i];
            s[i] = s[j];
            s[j] = tmp;
            i++; j--;
        }
    }
    return s;
}