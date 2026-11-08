#include <bits/stdc++.h>
using namespace std;

using ll = long long;
const int MOD = 1e9 + 7;

void solve() {
    int n;
    cin >> n;
    ll result = 1;
    for(int i=0;i<n;i++) {
        result=(result*2)%MOD;
    }
    cout << result;
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