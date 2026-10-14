#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    string name;
    cin >> name;
    ll nf;
    cin >> nf;
    if(name=="Thor") cout << "Y" <<"\n";
    else cout << "N" << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;  // uncomment when the problem has multiple test cases

    while (t--) {
        solve();
    }

    return 0;
}