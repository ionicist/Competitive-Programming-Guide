#include <bits/stdc++.h>

using namespace std;

int max_customers(int n, vector<int>& arrival, vector<int>& leaving) {
    sort(arrival.begin(), arrival.end());
    sort(leaving.begin(), leaving.end());
    int res = 0;
    int current = 0;
    int i = 0;
    int j = 0;
    while (i < n && j < n) {
        int arrive = arrival[i];
        int leave = leaving[j];
        if (arrive < leave) {
            i++;
            current++;
            res = max(res, current);
        } else if (arrive > leave) {
            j++;
            current--;
        } else {
            i++;
            j++;
        }
    }
    return res;
}

void solve(int n, vector<int>& arrival, vector<int>& leaving) {
    int res = max_customers(n, arrival, leaving);
    cout << res << '\n';
    return;
}

int main() {
    int n;
    cin >> n;
    vector<int> arrival(n);
    vector<int> leaving(n);
    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        arrival[i] = a;
        leaving[i] = b;
    }
    solve(n, arrival, leaving);
    return 0;
}
