/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* recoverOrder(int* order, int orderSize, int* friends, int friendsSize, int* returnSize) {
    int *friendsInFinishingOrder = malloc(friendsSize * sizeof(int));
    int friendsTable[101] = { 0 };
    for (int i = 0; i < friendsSize; i++)
        friendsTable[friends[i]] = 1;

    *returnSize = 0;
    for (int i = 0; i < orderSize; i++) {
        if (friendsTable[order[i]])
            friendsInFinishingOrder[(*returnSize)++] = order[i];
    }

    return friendsInFinishingOrder;
}