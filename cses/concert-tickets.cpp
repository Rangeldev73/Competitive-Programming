#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    
    multiset<int> tickets;
    for(int i = 0; i < n; i++) {
        int price;
        cin >> price;
        tickets.insert(price);
    }
    
    for(int i = 0; i < m; i++) {
        int max_price;
        cin >> max_price;
        
        auto it = tickets.upper_bound(max_price);
        
        if(it == tickets.begin()) {
            cout << -1 << "\n";
        } else {
            it--;
            cout << *it << "\n";
            tickets.erase(it);   
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    while (t--) {
        solve();
    }

    return 0;
}
