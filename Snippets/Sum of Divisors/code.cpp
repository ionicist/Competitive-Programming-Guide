long long sum_of_divisors(long long n) {
    long long res = 1;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            long long power = 0;
            while (n % i == 0) {
                n /= i;
                power++;
            }
            long long sum = 0;
            long long current = 1;
            for (long long j = 0; j <= power; j++) {
                sum += current;
                current *= i;
            }
            res *= sum;
        }
    }
    if (n != 1) {
        res *= (n + 1);
    }
    return res;
}
