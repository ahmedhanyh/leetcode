int hammingWeight(int n) {
    int num_set_bits = 0;
    while (n) {
        if (n % 2) num_set_bits++;
        n /= 2;
    }
    return num_set_bits;
}