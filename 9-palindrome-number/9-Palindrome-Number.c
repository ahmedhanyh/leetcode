bool isPalindrome(int x) {
    if (x < 0) return false;

    long xReversed = 0;

    int xCopy = x;
    while (xCopy) {
        xReversed = (xReversed * 10) + (xCopy % 10);
        xCopy /= 10;
    }

    return x == xReversed;
}