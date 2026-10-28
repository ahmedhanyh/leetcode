int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int max = 0, consecutiveOnes = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == 1) {
            consecutiveOnes++;
        } else {
            if (consecutiveOnes > max)
                max = consecutiveOnes;
            consecutiveOnes = 0;
        }
    }
    if (consecutiveOnes > max)
        max = consecutiveOnes;
    return max;
}