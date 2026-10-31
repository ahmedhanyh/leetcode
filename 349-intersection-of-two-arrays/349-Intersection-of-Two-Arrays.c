/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    
    int nums1Table[1001] = { 0 };
    int *result = calloc(1, sizeof(int));
    if (result == NULL) {
        fputs("calloc error: couldn't allocate array.\n",
                stderr);
    }
    int resultSize = 1;

    for (int i = 0; i < nums1Size; i++)
        nums1Table[nums1[i]] = 1;

    for (int i = 0; i < nums2Size; i++) {
        if (nums1Table[nums2[i]]) {
            result[resultSize - 1] = nums2[i];
            resultSize++;
            result = reallocarray(result, resultSize, sizeof(int));
            if (result == NULL) {
                fputs("realloc error: couldn't reallocate array.\n",
                        stderr);
            }
            nums1Table[nums2[i]] = 0;
        }
    }

    *returnSize = resultSize - 1;
    return result;
}