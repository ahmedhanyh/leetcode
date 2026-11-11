int countSegments(char* s) {
    int numSegments = 0, inSegment = 0;
    while (*s) {
        if (*s == ' ') {
            if (inSegment) {
                inSegment = 0;
            }
        } else if (!inSegment) {
            inSegment = 1;
            numSegments++;
        }
        s++;
    }
    return numSegments;
}