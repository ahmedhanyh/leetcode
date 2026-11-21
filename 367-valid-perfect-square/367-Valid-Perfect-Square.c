bool isPerfectSquare(int num) {
    long factor = 1;
    while (factor * factor < num) factor++;
    return factor * factor == num;
}