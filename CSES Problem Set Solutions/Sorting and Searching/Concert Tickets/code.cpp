#include <bits/stdc++.h>

using namespace std;

vector<int> give_tickets(int n, int m, vector<int>& tickets, vector<int>& customers) {
    vector<int> res(m);
    multiset<int> mst;
    for (int i = 0; i < n; i++) {
        mst.insert(tickets[i]);
    }
    for (int i = 0; i < m; i++) {
        auto itr = mst.upper_bound(customers[i]);
        if (itr != mst.begin()) {
            itr--;
            res[i] = *itr;
            mst.erase(itr);
        } else {
            res[i] = -1;
        }
    }
    return res;
}

void solve(int n, int m, vector<int>& tickets, vector<int>& customers) {
    vector<int> res = give_tickets(n, m, tickets, customers);
    for (int i = 0; i < m; i++) {
        cout << res[i] << '\n';
    }
    return;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> tickets(n);
    vector<int> customers(m);
    for (int i = 0; i < n; i++) {
        int h;
        cin >> h;
        tickets[i] = h;
    }
    for (int i = 0; i < m; i++) {
        int t;
        cin >> t;
        customers[i] = t;
    }
    solve(n, m, tickets, customers);
    return 0;
}
