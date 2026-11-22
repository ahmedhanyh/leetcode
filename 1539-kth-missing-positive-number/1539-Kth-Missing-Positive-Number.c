int findKthPositive(int* arr, int arrSize, int k) {
    int exists[2001] = { 0 }, i;
    for (i = 0; i < arrSize; i++) {
        exists[arr[i]] = 1;
    }
    for (i = 1; i <= 2000; i++) {
        if (!exists[i]) {
            if (k == 1) break;
            k--;
        }
    }
    return i;
}