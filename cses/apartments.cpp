#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    
    vector<int> da(n);
    vector<int> as(m);
    
    for(int i = 0; i < n; i++) {
        cin >> da[i];
    }
    for(int i = 0; i < m; i++) {
        cin >> as[i];
    }
    
    sort(da.begin(), da.end());
    sort(as.begin(), as.end());
    
    int i = 0; 
    int j = 0; 
    int matches = 0;
    
    while (i < n && j < m) {
        if (as[j] >= da[i] - k && as[j] <= da[i] + k) {
            matches++;
            i++; 
            j++; 
        }
        else if (as[j] < da[i] - k) {
            j++;
        }
        else {
            i++;
        }
    }
    
    cout << matches << "\n";
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