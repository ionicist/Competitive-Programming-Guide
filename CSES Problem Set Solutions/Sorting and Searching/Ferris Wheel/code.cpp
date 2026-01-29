#include <bits/stdc++.h>

using namespace std;

int distribute_gondolas(int n, int x, vector<int>& weights) {
    sort(weights.begin(), weights.end());
    int res = 0;
    int i = 0;
    int j = n - 1;
    while (i <= j) {
        int light = weights[i];
        int heavy = weights[j];
        if (light + heavy <= x && i != j) {
            i++;
            j--;
            res++;
        } else {
            j--;
            res++;
        }
    }
    return res;
}

void solve(int n, int x, vector<int>& weights) {
    int res = distribute_gondolas(n, x, weights);
    cout << res << '\n';
    return;
}

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> weights(n);
    for (int i = 0; i < n; i++) {
        int p;
        cin >> p;
        weights[i] = p;
    }
    solve(n, x, weights);
    return 0;
}
