#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    string s;
    cin >> s;
    int size = s.size();
    char cr = s[0];
    int br=1,rc=1;
    for(int i=1;i<size;i++) {
        char cc = s[i];
        if(cc==cr) {
            rc++;
        }
        else {
            cr = cc;
            rc=1;
        }
        if(rc>br) br=rc;
    }
    cout << br << "\n";
}
//1123455566
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