char findTheDifference(char* s, char* t) {
    int letters[26] = { 0 }, i;
    for (i = 0; s[i]; i++) {
        letters[s[i] - 'a']++;
    }
    for (i = 0; t[i]; i++) {
        letters[t[i] - 'a']--;
    }
    for (i = 0; i < 26; i++) {
        if (letters[i])
            return 'a' + i;
    }
    return 0;
}