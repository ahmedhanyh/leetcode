int searchInsert(int* nums, int numsSize, int target) {
    int low, mid, high;
    low = 0;
    high = numsSize - 1;
    while (low < high) {
        mid = (low + high) / 2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }

    mid = (low + high) / 2;
    if (nums[mid] >= target) {
        return mid;
    } else {
        return mid + 1;
    }
}