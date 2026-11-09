#include <stdlib.h>

int removeElement(int* nums, int numsSize, int val) {
    int k = 0, tmp;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == val) {
            for (int j = i + 1; j < numsSize; j++) {
                if (nums[i] != nums[j]) {
                    k++;
                    tmp = nums[i];
                    nums[i] = nums[j];
                    nums[j] = tmp;
                    break;
                }
            }
        } else {
            k++;
        }
    }
    return k;
}