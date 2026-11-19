// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    unsigned low, mid, high, isBad, foundBadVersion;
    low = 1;
    high = n;
    while (low < high) {
        mid = (high + low) / 2;
        isBad = isBadVersion(mid);
        if (!isBad) {
            low = mid + 1;
        } else {
            while (isBadVersion(mid)) mid--;
            break;
        }
    }
    return mid + 1;
}