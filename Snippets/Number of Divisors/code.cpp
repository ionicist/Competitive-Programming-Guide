long long number_of_divisors(long long n) {
    long long res = 1;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            long long power = 0;
            while (n % i == 0) {
                n /= i;
                power++;
            }
            res *= (power + 1);
        }
    }
    if (n != 1) {
        res *= 2;
    }
    return res;
}
