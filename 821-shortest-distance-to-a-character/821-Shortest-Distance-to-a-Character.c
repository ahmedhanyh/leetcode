/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shortestToChar(char* s, char c, int* returnSize) {
    size_t sLength = strlen(s);
    int* result = malloc(sLength * sizeof(int));

    int j, k;
    for (int i = 0; s[i] != '\0'; i++) {
        j = k = i;
        while (j >= 0 || k < sLength) {
            if (j >= 0 && s[j] == c) {
                result[i] = i - j;
                break;
            }
            else if (k < sLength && s[k] == c) {
                result[i] = k - i;
                break;
            }
            j--, k++;
        }
    }

    *returnSize = sLength;
    return result;
}