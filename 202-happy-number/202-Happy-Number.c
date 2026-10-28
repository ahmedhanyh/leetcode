bool isHappy(int n) {
    int *numbers = calloc(1, sizeof(int));
    int numbersSize = 1, sum;
    while (true) {
        sum = 0;
        while (n > 0) {
            sum += (n % 10) * (n % 10);
            n /= 10;
        }
        n = sum;
        if (n == 1) break;
        for (int i = 0; i < numbersSize - 1; i++) {
            if (numbers[i] == n)
                return false;
        }
        numbers[numbersSize - 1] = n;
        numbersSize++;
        numbers = reallocarray(numbers, numbersSize, sizeof(int));
    }
    free(numbers);
    return true;
}