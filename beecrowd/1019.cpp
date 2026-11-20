#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int s;
    cin >> s;
    
    int h = s / 3600;
    s %= 3600;       
    
    int m = s / 60;   
    s %= 60;          
    
    cout << h << ":" << m << ":" << s << "\n";
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