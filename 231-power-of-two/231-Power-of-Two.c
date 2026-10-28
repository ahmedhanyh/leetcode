bool isPowerOfTwo(int n) {
    if (n < 1) return false;
    for (int i = 0; i < 31; i++)
        if ((n & (1 << i)) == n)
            return true;
    return false;
}