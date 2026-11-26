int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}

int minOperations(int* nums, int numsSize, int k) {
    int sum, numOperations = 0, i = 0;
    while (i < numsSize) {
        sum = sumArray(nums, numsSize);
        if (sum % k == 0)
            return numOperations;
        while (i < numsSize && nums[i] == 0)
            i++;
        nums[i] = nums[i] - 1;
        numOperations++;
    }
    return -1;
}
