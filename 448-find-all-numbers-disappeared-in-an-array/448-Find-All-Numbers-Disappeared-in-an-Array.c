/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int* result = malloc(numsSize * sizeof(int));
    int count[numsSize + 1], resultSize = 0;
    for (int i = 0; i <= numsSize; i++) {
        count[i] = 0;
    }
    for (int i = 0; i < numsSize; i++) {
        count[nums[i]]++;
    }
    for (int i = 1; i <= numsSize; i++) {
        if (count[i] == 0) {
            result[resultSize++] = i;
        }
    }
    *returnSize = resultSize;
    return result;
}