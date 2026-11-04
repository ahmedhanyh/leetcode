int fib(int n){
    if (n == 0) return 0;
    if (n == 1) return 1;

    int fib0 = 0, fib1 = 1;
    int fibn;
    while (n > 1) {
        fibn = fib0 + fib1;
        fib0 = fib1;
        fib1 = fibn;
        n--;
    }
    return fibn;
}