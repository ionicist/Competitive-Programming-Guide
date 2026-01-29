#include <bits/stdc++.h>

using namespace std;

int distribute_apts(int n, int m, int k, vector<int>& applicants, vector<int>& apartments) {
    sort(applicants.begin(), applicants.end());
    sort(apartments.begin(), apartments.end());
    int res = 0;
    int i = 0;
    int j = 0;
    while (i < n && j < m) {
        int desired = applicants[i];
        int actual = apartments[j];
        if (desired + k < actual) {
            i++;
        } else if (desired - k > actual) {
            j++;
        } else {
            i++;
            j++;
            res++;
        }
    }
    return res;
}

void solve(int n, int m, int k, vector<int>& applicants, vector<int>& apartments) {
    int res = distribute_apts(n, m, k, applicants, apartments);
    cout << res << '\n';
    return;
}

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> applicants(n);
    vector<int> apartments(m);
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        applicants[i] = a;
    }
    for (int i = 0; i < m; i++) {
        int b;
        cin >> b;
        apartments[i] = b;
    }
    solve(n, m, k, applicants, apartments);
    return 0;
}
