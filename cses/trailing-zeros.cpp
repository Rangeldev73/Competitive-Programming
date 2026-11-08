#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll n;
    cin >> n;
    
    ll count0 = 0;
    while(n > 0) {
        count0 += n / 5;
        n /= 5;
    }
    
    cout << count0 << "\n";
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