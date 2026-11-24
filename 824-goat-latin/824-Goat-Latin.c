bool isVowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
         || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
}

char* toGoatLatin(char *sentence) {
    char *translation = malloc(sizeof(char) * 5000);
    int translationSize = 0, wordIndex = 0, length = strlen(sentence);
    bool startsWithVowel = 0;
    char consonant;
    for (int i = 0; i <= length; i++) {
        if (i == 0 || sentence[i - 1] == ' ') {
            wordIndex++;
            startsWithVowel = isVowel(sentence[i]);
            if (!startsWithVowel) consonant = sentence[i++];
        }
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            if (!startsWithVowel)
                translation[translationSize++] = consonant;
            translation[translationSize++] = 'm';
            translation[translationSize++] = 'a';
            for (int j = 0; j < wordIndex; j++)
                translation[translationSize++] = 'a';
        }
        translation[translationSize++] = sentence[i];
    }
    return translation;
}