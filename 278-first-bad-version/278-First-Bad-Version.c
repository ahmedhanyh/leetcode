// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    unsigned low, mid, high;
    low = 1;
    high = n;
    while (low < high) {
        mid = (high + low) / 2;
        if (isBadVersion(mid)) {
            while (isBadVersion(--mid));
            break;
        } else {
            low = mid + 1;
        }
    }
    return mid + 1;
}