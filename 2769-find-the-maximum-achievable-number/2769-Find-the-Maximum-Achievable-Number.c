int theMaximumAchievableX(int num, int t) {
    int x = num + 1, xCopy, numCopy, tCopy;
    while (true) {
        numCopy = num;
        xCopy = x;
        for (tCopy = t; tCopy > 0; tCopy--) {
            numCopy++;
            xCopy--;
        }
        if (numCopy == xCopy) return x;
        else x++;
    }
    return -1;
}