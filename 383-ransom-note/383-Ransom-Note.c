bool canConstruct(char* ransomNote, char* magazine) {
    int ransomNoteLettersCount[26] = { 0 };
    int magazineLettersCount[26] = { 0 };
    for (int i = 0; ransomNote[i]; i++)
        ransomNoteLettersCount[ransomNote[i] - 'a']++;
    for (int i = 0; magazine[i]; i++)
        magazineLettersCount[magazine[i] - 'a']++;
    for (int i = 0; i < 26; i++)
        if (ransomNoteLettersCount[i] > magazineLettersCount[i])
            return false;
    return true;
}