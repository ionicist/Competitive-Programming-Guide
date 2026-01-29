#include <bits/stdc++.h>

using namespace std;

int number_of_divisors(int x) {
    int res = 1;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) {
            int power = 0;
            while (x % i == 0) {
                x /= i;
                power++;
            }
            res *= (power + 1);
        }
    }
    if (x != 1) {
        res *= 2;
    }
    return res;
}

void solve(int x) {
    int res = number_of_divisors(x);
    cout << res << '\n';
    return;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        solve(x);
    }
    return 0;
}
