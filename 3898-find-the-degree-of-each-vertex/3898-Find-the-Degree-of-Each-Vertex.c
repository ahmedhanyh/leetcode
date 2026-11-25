/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDegrees(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    int *degrees = malloc(matrixSize * sizeof(int));
    int degreesSize = 0, degree;
    for (int r = 0; r < matrixSize; r++) {
        degree = 0;
        for (int c = 0; c < matrixSize; c++) {
            if (matrix[r][c]) degree++;
        }
        degrees[degreesSize++] = degree;
    }
    *matrixColSize = matrixSize;
    *returnSize = matrixSize;
    return degrees;
}