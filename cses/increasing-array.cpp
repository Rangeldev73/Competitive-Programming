#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;
    
    ll max_val = 0;
    ll moves = 0;
    
    for(int i = 0; i < n; i++) {
        ll current;
        cin >> current;
        
        if(i == 0) {
            max_val = current; 
        } else {
            if(current < max_val) {
                moves += (max_val - current); 
            } else {
                max_val = current; 
            }
        }
    }
    
    cout << moves << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t;  // uncomment when the problem has multiple test cases

    while(t--) {
        solve();
    }

    return 0;
}