/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsSize, int* returnSize) {
    int* ans = malloc(numsSize * 2 * sizeof(int));
    memcpy(ans, nums, numsSize * sizeof(int));
    memcpy(ans + numsSize, nums, numsSize * sizeof(int));
    *returnSize = numsSize * 2;
    return ans;
}