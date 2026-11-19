int removeDuplicates(int* nums, int numsSize) {
    int k = 1, i = 1;
    while (i < numsSize) {
        while (i < numsSize && nums[i] == nums[k - 1]) i++;
        if (i < numsSize) nums[k++] = nums[i++];
    }
    return k;
}