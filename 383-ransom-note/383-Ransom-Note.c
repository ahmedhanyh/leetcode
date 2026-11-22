bool canConstruct(char* ransomNote, char* magazine) {
    int lettersCount[26] = { 0 };
    for (int i = 0; magazine[i]; i++)
        lettersCount[magazine[i] - 'a']++;
    for (int i = 0; ransomNote[i]; i++)
        lettersCount[ransomNote[i] - 'a']--;
    for (int i = 0; i < 26; i++)
        if (lettersCount[i] < 0)
            return false;
    return true;
}