#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int t;
    cin >> t;
    int g,c=0;
    for(int i=0;i<5;i++) {
        cin >> g;
        if(g==t) c++;
    }
    cout << c << "\n";
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