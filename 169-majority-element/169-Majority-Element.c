int getIndex(int num) {
    if (num < 0) return (num * -1) % 50000;
    else return num % 50000 + 50000;
}

int majorityElement(int* nums, int numsSize) {
    int majorityCount = numsSize / 2;
    int countTable[100001] = { 0 };
    for (int i = 0; i < numsSize; i++) {
        countTable[getIndex(nums[i])]++;
    }
    for (int i = 0; i < numsSize; i++) {
        if (countTable[getIndex(nums[i])] > majorityCount)
            return nums[i];
    }
    return -1;
}
