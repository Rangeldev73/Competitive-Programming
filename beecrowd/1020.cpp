#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int age;
    cin >> age;
    
    int y = age / 365;
    age %= 365;
    
    int m = age / 30;
    age %= 30;
    
    cout << y << " ano(s)\n";
    cout << m << " mes(es)\n";
    cout << age << " dia(s)\n";
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