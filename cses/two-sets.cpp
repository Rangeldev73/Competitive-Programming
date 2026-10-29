#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    ll n;
    cin >> n;
    ll total_sum=n*(n+1)/2;
    if(total_sum%2!=0) {
        cout << "NO" << "\n";
        return;
    }
    cout << "YES" << "\n";
    vector<int> g1;
    vector<int> g2;

    ll i = n;
    if(n%4==3) {
        g1.push_back(1);
        g1.push_back(2);
        g2.push_back(3);
        while(i>3) {
            g1.push_back(i);
            g1.push_back(i - 3);
            g2.push_back(i - 1);
            g2.push_back(i - 2);
            i -= 4;
        }
    }
    else {
        while(i>=4) {
            g1.push_back(i);
            g1.push_back(i - 3);
            g2.push_back(i - 1);
            g2.push_back(i - 2);
            i -= 4;
        }
    }
    cout << g1.size() << "\n";
    for(int x : g1) {
        cout << x << " ";
    }
    cout << "\n";
    cout << g2.size() << "\n";
    for(int x : g2) {
        cout << x << " ";
    }
    cout << "\n";
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