// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(int n) {
    unsigned low, mid, high, isBad, foundBadVersion;
    low = 1;
    high = n;
    foundBadVersion = 0;
    while (low < high) {
        mid = (high + low) / 2;
        isBad = isBadVersion(mid);
        printf("%d\n", mid);
        if (!isBad) {
            if (foundBadVersion) {
                for (unsigned version = mid + 1; version <= high; version++) {
                    if (isBadVersion(version))
                        return version;
                }
            }
            else low = mid + 1;
        } else {
            if (!foundBadVersion)
                foundBadVersion = 1;
            high = mid;
        }
    }
    return low;
}