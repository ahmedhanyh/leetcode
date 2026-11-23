bool rotateString(char* s, char* goal) {
    int sLength = strlen(s), goalLength = strlen(goal);
    if (sLength != goalLength) return false;
    for (int i = 0; i < sLength; i++) {
        if (strncmp(goal, s + i, sLength - i) == 0
         && strncmp(goal + sLength - i, s, i) == 0) {
            return true;
         }
    }
    return false;
}