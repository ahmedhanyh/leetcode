/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int* result = malloc(numsSize * sizeof(int));
    int resultSize = 0;
    int appeared[100001] = { 0 };
    for (int i = 0; i < numsSize; i++) {
        appeared[nums[i]] = 1;
    }
    for (int num = 1; num <= numsSize; num++) {
        if (!appeared[num])
            result[resultSize++] = num;
    }
    *returnSize = resultSize;
    return result;
}