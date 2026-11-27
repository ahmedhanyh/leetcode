/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* concatWithReverse(int* nums, int numsSize, int* returnSize) {
    int *ans = malloc(sizeof(int) * numsSize * 2);
    for (int i = 0; i < numsSize; i++) {
        ans[i] = nums[i];
        ans[i + numsSize] = nums[numsSize - i - 1];
    }
    *returnSize = numsSize * 2;
    return ans;
}