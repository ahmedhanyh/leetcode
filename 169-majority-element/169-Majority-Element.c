int cmp(const void *a, const void *b) {
    return *((int *)a) - *((int *)b);
}

int majorityElement(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), cmp);
    int count = 0;
    for (int i = 0; i < numsSize; i++) {
        count++;
        if (i == numsSize - 1 || nums[i] != nums[i + 1])
            if (count > numsSize / 2)
                return nums[i];
    }
    return 0;
}