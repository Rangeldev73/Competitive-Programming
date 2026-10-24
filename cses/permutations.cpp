#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin>>n;
    if(n==1) cout << n << "\n";
    else if(n==2||n==3) cout << "NO SOLUTION" << "\n";
    else {
        for(int i=2;i<=n;i+=2) {
            cout << i << " ";
        }
        for(int i=1;i<=n;i+=2) {
            cout << i << " ";
        }
        cout << "\n";
    }
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