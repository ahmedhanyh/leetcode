/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** summaryRanges(int* nums, int numsSize, int* returnSize) {
    int rangesSize = 1;
    char **rangesArray = calloc(rangesSize, sizeof(char *));

    int rangeBeginning = 0;
    for (int i = 0; i < numsSize; i++) {
        if (i == numsSize - 1 || nums[i] != nums[i + 1] - 1) {
            rangesArray[rangesSize - 1] = calloc(25, sizeof(char));
            if (i == rangeBeginning)
                sprintf(rangesArray[rangesSize - 1],
                        "%d", nums[rangeBeginning]);
            else
                sprintf(rangesArray[rangesSize - 1],
                        "%d->%d", nums[rangeBeginning], nums[i]);
            rangesSize++;
            rangesArray = reallocarray(
                    rangesArray, rangesSize, sizeof(char *));
            rangeBeginning = i + 1;
        }
    }

    *returnSize = rangesSize - 1;
    return rangesArray;
}