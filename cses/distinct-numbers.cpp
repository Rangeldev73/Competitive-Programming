#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<int> values(n);
    for (int i = 0; i < n; i++) {
        cin >> values[i];
    }
    sort(values.begin(), values.end());
    // std::unique moves all consecutive duplicates to the end of the vector
    // and returns an iterator to the start of the duplicates.
    // values.erase then physically removes them from memory.
    values.erase(unique(values.begin(), values.end()), values.end());
     cout << values.size() << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;  // uncomment when the problem has multiple test cases

    while (t--) {
        solve();
    }

    return 0;
}