bool checkPerfectNumber(int num) {
    int sumDivisors = 0;
    for (int d = 1; d <= num / 2; d++) {
        if (num % d == 0)
            sumDivisors += d;
    }
    return num == sumDivisors;
}