bool checkPerfectNumber(int num) {
    if (num == 1) return false;
    int sumDivisors = 1;
    for (int d = 2; d * d < num; d++) {
        if (num % d == 0)
            sumDivisors += d + (num / d);
    }
    return num == sumDivisors;
}