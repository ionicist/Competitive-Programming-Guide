#include <bits/stdc++.h>

using namespace std;

int distinct_nums(int n, vector<int>& nums) {
    set<int> st;
    for (int i = 0; i < n; i++) {
        st.insert(nums[i]);
    }
    int res = st.size();
    return res;
}

void solve(int n, vector<int>& nums) {
    int res = distinct_nums(n, nums);
    cout << res << '\n';
    return;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        nums[i] = x;
    }
    solve(n, nums);
    return 0;
}
