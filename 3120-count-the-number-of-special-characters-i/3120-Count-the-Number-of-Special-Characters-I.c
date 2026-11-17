int numberOfSpecialChars(char* word) {
    int count = 0;
    int lower[26] = { 0 };
    int upper[26] = { 0 };
    for (int i = 0; word[i]; i++) {
        if (isupper(word[i]))
            upper[word[i] - 'A']++;
        else
            lower[word[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (lower[i] && upper[i])
            count++;
    }
    return count;
}