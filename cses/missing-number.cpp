#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll n;
    cin >> n;
    ll total_sum = n*(n+1)/2;
    ll curr_sum = 0;
    for(int i=0;i<n-1;i++) {
        ll a;
        cin >> a;
        curr_sum+=a;
    }
    cout << total_sum - curr_sum << "\n";
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