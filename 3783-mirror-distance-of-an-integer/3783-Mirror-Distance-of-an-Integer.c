int reverse(int n) {
    int n_reverse = 0;
    while (n) {
        n_reverse = (n_reverse * 10) + (n % 10);
        n /= 10;
    }
    return n_reverse;
}

int mirrorDistance(int n) {
    return abs(n - reverse(n));
}