#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
   ll x;
   cin >> x;
   if(x==1) {
        cout << x << " nao eh primo" <<"\n";
        return;
   }
   else {
        bool prime = true;
        for(int i=2;i*i<=x;i++) {
            if(x%i==0) {
                prime = false;
                break;
            }
        }
        if(prime) cout << x << " eh primo" <<"\n";
        else cout << x << " nao eh primo" <<"\n";
   }
   
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