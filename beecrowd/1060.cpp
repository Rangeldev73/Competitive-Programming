#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int c=0;
    for(int i=0;i<6;i++) {
        double n;
        cin >> n;
        if(n>0) c++;
    }
    cout << c << " valores positivos" << "\n";
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