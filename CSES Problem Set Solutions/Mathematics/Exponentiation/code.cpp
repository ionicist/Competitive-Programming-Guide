#include <bits/stdc++.h>

using namespace std;

const int mod = 1000000007;

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

void solve(long long a, long long b) {
    long long res = binary_power(a, b);
    cout << res << '\n';
    return;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        long long a, b;
        cin >> a >> b;
        solve(a, b);
    }
    return 0;
}
