int cmp(const void* a, const void* b) {
    return (*((int*) b)) - (*((int*) a));
}

char** findRelativeRanks(int* score, int scoreSize, int* returnSize) {
    int scoreCopy[scoreSize];
    memcpy(scoreCopy, score, scoreSize * sizeof(int));
    qsort(scoreCopy, scoreSize, sizeof(int), cmp);

    char** ranks = malloc(scoreSize * sizeof(char*));
    char* rank;
    for (int i = 0; i < scoreSize; i++) {
        for (int j = 0; j < scoreSize; j++) {
            if (score[i] == scoreCopy[j]) {
                if (j == 0) {
                    rank = malloc(11 * sizeof(char));
                    strcpy(rank, "Gold Medal");
                    ranks[i] = rank;
                } else if (j == 1) {
                    rank = malloc(13 * sizeof(char));
                    strcpy(rank, "Silver Medal");
                    ranks[i] = rank;
                } else if (j == 2) {
                    rank = malloc(13 * sizeof(char));
                    strcpy(rank, "Bronze Medal");
                    ranks[i] = rank;
                } else {
                    rank = malloc(8 * sizeof(char));
                    sprintf(rank, "%d", j + 1);
                    ranks[i] = rank;
                }
            }
        }
    }
    *returnSize = scoreSize;
    return ranks;
}
