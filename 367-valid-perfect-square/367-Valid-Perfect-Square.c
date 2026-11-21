bool isPerfectSquare(int num) {
    long min, factor, max;
    min = 1, max = num;
    while (min <= max) {
        factor = min + (max - min) / 2;
        if (factor * factor == num)
            return true;
        else if (factor * factor < num)
            min = factor + 1;
        else
            max = factor - 1;
    }
    return false;
}