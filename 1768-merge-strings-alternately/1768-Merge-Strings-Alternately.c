char * mergeAlternately(char * word1, char * word2){
    char *result = malloc(201 * sizeof(char));
    int current = 0, i;
    for (i = 0; word1[i] && word2[i]; i++) {
        result[current++] = word1[i];
        result[current++] = word2[i];
    }
    if (word1[i]) {
        while (word1[i]) result[current++] = word1[i++];
    } else {
        while (word2[i]) result[current++] = word2[i++];
    }
    result[current] = '\0';
    return result;
}