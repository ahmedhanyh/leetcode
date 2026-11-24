char* toGoatLatin(char* sentence) {
    int length = strlen(sentence);
    char *goatLatin = malloc(sizeof(char) * 5000);
    int wordIndex = 0, goatSize = 0, isVowel = 0;
    char firstConsonant;
    for (int i = 0; i <= length; i++) {
        if (i == 0 || sentence[i - 1] == ' ') {
            wordIndex++;
            if (strchr("aeiouAEIOU", sentence[i])) {
                isVowel = 1;
            }
            else {
                isVowel = 0;
                firstConsonant = sentence[i++];
            }
        }
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            if (!isVowel) goatLatin[goatSize++] = firstConsonant;
            goatLatin[goatSize++] = 'm';
            goatLatin[goatSize++] = 'a';
            for (int j = 0; j < wordIndex; j++) {
                goatLatin[goatSize++] = 'a';
            }
        }
        goatLatin[goatSize++] = sentence[i];
    }
    return goatLatin;
}