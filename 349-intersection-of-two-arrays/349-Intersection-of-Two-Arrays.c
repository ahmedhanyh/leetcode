/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int nums1Table[1001] = { 0 };
    int capacity = nums1Size < nums2Size ? nums1Size : nums2Size;
    int *result = calloc(capacity, sizeof(int));
    if (result == NULL) {
        fputs("calloc error: couldn't allocate array.\n",
                stderr);
        return NULL;
    }
    int resultSize = 0;

    for (int i = 0; i < nums1Size; i++)
        nums1Table[nums1[i]] = 1;

    for (int i = 0; i < nums2Size; i++) {
        if (nums1Table[nums2[i]]) {
            result[resultSize++] = nums2[i];
            nums1Table[nums2[i]] = 0;
        }
    }

    *returnSize = resultSize;
    return result;
}