int removeElement(int* nums, int numsSize, int val) {
    int k = 0, i = 0, tmp;
    while (i < numsSize) {
        if (nums[i] != val) {
            tmp = nums[i];
            nums[i] = nums[k];
            nums[k] = tmp;
            k++;
        }
        i++;
    }
    return k;
}