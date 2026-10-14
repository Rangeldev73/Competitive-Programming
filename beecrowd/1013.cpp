#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll a,b,c;
    cin >> a >> b >> c;
    ll gab = (a + b + abs(a - b)) / 2;
    ll g = (gab + c + abs(gab - c)) / 2;

    cout << g << " eh o maior" << "\n";
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