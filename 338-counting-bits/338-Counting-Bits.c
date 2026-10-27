/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int countOneBits(int n) {
    int bits = 0;
    while (n) {
        bits += n % 2;
        n /= 2;
    }
    return bits;
}

int* countBits(int n, int* returnSize) {
    int *counts = malloc((n + 1) * sizeof(int));
    for (int i = 0; i <= n; i++)
        counts[i] = countOneBits(i);
    *returnSize = n + 1;
    return counts;
}