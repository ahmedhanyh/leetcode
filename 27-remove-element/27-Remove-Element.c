#include <stdlib.h>

int removeElement(int* nums, int numsSize, int val) {
    int *resultNums = calloc(numsSize, sizeof(int));
    int k = 0;

    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != val) {
            resultNums[k] = nums[i];
            k++;
        }
    }

    for (int i = 0; i < k; i++) {
        nums[i] = resultNums[i];
    }

    free(resultNums);

    return k;
}