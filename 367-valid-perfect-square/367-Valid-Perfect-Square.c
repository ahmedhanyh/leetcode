bool isPerfectSquare(int num) {
    for (long factor = 1; factor <= num; factor++) {
        if (factor * factor == num)
            return true;
        else if (factor * factor > num)
            break;
    }
    return false;
}