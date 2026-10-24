bool isPalindrome(int x) {
    char x_str[12];
    int n = snprintf(x_str, 12, "%d", x);

    for (int start = 0, end = n - 1; start <= end; start++, end--) {
        if (x_str[start] != x_str[end]) {
            return false;
        }
    }
    return true;
}