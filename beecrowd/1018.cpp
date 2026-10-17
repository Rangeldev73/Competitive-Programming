#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int value;
    cin >> value;

    cout << value << "\n";
    vector<int> banknotes = {100, 50, 20, 10, 5, 2, 1};
    for(int note : banknotes) {
        int count = value/note;
        value%=note;

        cout << count << " nota(s) de R$ " << note << ",00\n";
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