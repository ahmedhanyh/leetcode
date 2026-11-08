int hash(int num) {
    if (num < 0) return (num * -1) % 100000;
    else return num % 100000 + 100000;
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* indices = malloc(2 * sizeof(int));
    *returnSize = 2;

    int numsTable[200001];
    for (int i = 0; i < 200001; i++)
        numsTable[i] = -1;

    for (int i = 0; i < numsSize; i++) {
        numsTable[hash(nums[i])] = i;
    }

    int num2, num2Index;
    for (int i = 0; i < numsSize; i++) {
        num2 = target - nums[i];
        num2Index = numsTable[hash(num2)];
        if (num2Index != -1 && num2Index != i) {
            indices[0] = i;
            indices[1] = num2Index;
            return indices;
        }
    }

    return indices;
}