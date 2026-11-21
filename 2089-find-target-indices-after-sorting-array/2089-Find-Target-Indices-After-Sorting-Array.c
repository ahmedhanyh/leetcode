/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int cmp(const void* a, const void* b) {
    return *((int*) a) - *((int*) b);
}

int* targetIndices(int* nums, int numsSize, int target, int* returnSize) {
    qsort(nums, numsSize, sizeof(int), cmp);
    int* indices = malloc(numsSize * sizeof(int));
    int indicesSize = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == target) {
            indices[indicesSize++] = i;
        }
    }
    *returnSize = indicesSize;
    return indices;
}