int missingNumber(int* nums, int numsSize) {
    int i, sorted[numsSize + 1];
    for (i = 0; i <= numsSize; i++) {
        sorted[i] = -1;
    }
    for (i = 0; i < numsSize; i++) {
        sorted[nums[i]] = nums[i];
    }
    for (i = 0; i <= numsSize; i++) {
        if (sorted[i] == -1) return i;
    }
    return i;
}