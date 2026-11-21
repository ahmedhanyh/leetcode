/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* targetIndices(int* nums, int numsSize, int target, int* returnSize) {
    int* indices = malloc(numsSize * sizeof(int)), indicesSize = 0;
    int targetCount = 0, lessCount = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == target) targetCount++;
        else if (nums[i] < target) lessCount++;
    }
    for (int i = lessCount; i < lessCount + targetCount; i++) {
        indices[indicesSize++] = i;
    }
    *returnSize = indicesSize;
    return indices;
}