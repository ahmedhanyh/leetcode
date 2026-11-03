int addDigits(int num) {
    int sum;
    while (1) {
        sum = 0;
        while (num) {
            sum += num % 10;
            num /= 10;
        }
        if (sum < 10) return sum;
        num = sum;
    }
    return -1;
}