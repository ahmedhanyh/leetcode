char nextGreatestLetter(char* letters, int lettersSize, char target) {
    int low, mid, high;
    low = 0;
    high = lettersSize - 1;
    while (low <= high) {
        mid = (high - low) / 2 + low;
        if (letters[mid] <= target) {
            low = mid + 1;
        } else {
            while (--mid >= 0 && letters[mid] > target);
            return letters[mid + 1];
        }
    }
    return letters[0];
}