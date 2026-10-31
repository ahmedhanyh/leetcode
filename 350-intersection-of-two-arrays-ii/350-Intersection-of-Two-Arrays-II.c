/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int nums1Table[1001] = { 0 };
    int nums2Table[1001] = { 0 };

    int capacity = nums1Size < nums2Size ? nums1Size : nums2Size;
    int *result = calloc(capacity, sizeof(int));
    if (result == NULL) {
        fputs("calloc error: couldn't allocate array.\n",
                stderr);
        return NULL;
    }
    int resultSize = 0;

    for (int i = 0; i < nums1Size; i++)
        nums1Table[nums1[i]]++;
    for (int i = 0; i < nums2Size; i++)
        nums2Table[nums2[i]]++;

    int count;
    for (int i = 0; i < nums1Size; i++) {
        if (nums2Table[nums1[i]]) {
            if (nums1Table[nums1[i]] < nums2Table[nums1[i]])
                count = nums1Table[nums1[i]];
            else
                count = nums2Table[nums1[i]];
            for (int j = 0; j < count; j++)
                result[resultSize++] = nums1[i];
            nums1Table[nums1[i]] = 0;
            nums2Table[nums1[i]] = 0;
        }
    }

    *returnSize = resultSize;
    return result;
}