int findComplement(int num) {
    long power;
    for (long i = 0; i < 32; i++) {
        if ((1l << i) > num) {
            power = (1l << i);
            break;
        }
    }
    return num ^ (power - 1);
}