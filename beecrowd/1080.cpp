#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int hn=-1,hni=-1;
    for(int i=1;i<=100;i++) {
        int cn;
        cin >> cn;
        if(cn>hn) {
            hn=cn;
            hni = i;
        }
    }
    cout << hn << "\n" << hni << "\n";
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