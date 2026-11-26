int theMaximumAchievableX(int num, int t) {
    int x = num + 1;
    while (true) {
        if ((x - num) / 2 == t) return x;
        else x++;
    }
    return -1;
}