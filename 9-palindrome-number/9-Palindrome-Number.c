bool isPalindrome(int x) {
    if (x < 0) return false;
    if (x < 10) return true;

    int digits[10];
    int top = 0;

    int len = 0, xCopy = x;
    while (xCopy) {
        xCopy /= 10;
        len++;
    }

    for (int i = 0; i < len / 2; i++) {
        digits[top++] = x % 10;
        x /= 10;
    }

    // remove middle digit for odd-length x
    if (len % 2) x /= 10;

    for (int i = 0; i < len / 2; i++) {
        if (digits[--top] != (x % 10))
            return false;
        x /= 10;
    }

    return true;
}