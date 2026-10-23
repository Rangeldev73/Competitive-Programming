#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n,x;
    cin >> n >> x;
    vector<int> v(n);
    for(int i=0;i<n;i++) {
        cin >> v[i];
    }
    sort(v.begin(),v.end());
    int g=0;
    int start=0;
    int end=n-1;
    while(start<=end) {
        if(start==end) {
            g++;
            break;
        }
        if(v[start]+v[end]<=x) {
            start++;
            end--;
        }
        else {
            end--;
        }
        g++;
    }
    cout << g << "\n";
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