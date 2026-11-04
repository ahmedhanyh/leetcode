int singleNumber(int* nums, int numsSize) {
    int table[60001] = { 0 };
    for (int i = 0; i < numsSize; i++)
        table[nums[i] + 30000]++;
    for (int i = 0; i < numsSize; i++)
        if (table[nums[i] + 30000] == 1)
            return nums[i];
    return 0;
}