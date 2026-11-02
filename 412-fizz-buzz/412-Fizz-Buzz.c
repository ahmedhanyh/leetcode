/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    char **result = malloc(n * sizeof(char *));
    char *fizzBuzzStr;
    for (int i = 1; i <= n; i++) {
        fizzBuzzStr = malloc(10 * sizeof(char));
        if (i % 3 == 0 && i % 5 == 0) {
            strcpy(fizzBuzzStr, "FizzBuzz");
        } else if (i % 3 == 0) {
            strcpy(fizzBuzzStr, "Fizz");
        } else if (i % 5 == 0) {
            strcpy(fizzBuzzStr, "Buzz");
        } else {
            sprintf(fizzBuzzStr, "%d", i);
        }
        result[i - 1] = fizzBuzzStr;
    }
    *returnSize = n;
    return result;
}