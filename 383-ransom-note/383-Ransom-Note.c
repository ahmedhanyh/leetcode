bool canConstruct(char* ransomNote, char* magazine) {
    int lettersCount[26] = { 0 };
    while (*magazine) lettersCount[*(magazine++) - 'a']++;
    while (*ransomNote) lettersCount[*(ransomNote++) - 'a']--;
    for (int i = 0; i < 26; i++)
        if (lettersCount[i] < 0)
            return false;
    return true;
}