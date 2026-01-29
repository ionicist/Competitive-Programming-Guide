#include <bits/stdc++.h>

using namespace std;

const int mod = 1000000007;
const int phi = 1000000006;

long long binary_power(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b % 2 == 0) {
            a = (a * a) % mod;
            b /= 2;
        } else {
            res = (res * a) % mod;
            b--;
        }
    }
    return res;
}

long long reduced_power(long long b, long long c) {
    long long res = 1;
    while (c > 0) {
        if (c % 2 == 0) {
            b = (b * b) % phi;
            c /= 2;
        } else {
            res = (res * b) % phi;
            c--;
        }
    }
    return res;
}

long long tower_power(long long a, long long b, long long c) {
    long long temp = reduced_power(b, c);
    long long res = binary_power(a, temp);
    return res;
}

void solve(long long a, long long b, long long c) {
    long long res = tower_power(a, b, c);
    cout << res << '\n';
    return;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        long long a, b, c;
        cin >> a >> b >> c;
        solve(a, b, c);
    }
    return 0;
}
