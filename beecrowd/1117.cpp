#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int c=0;
    double s,sum=0;
    while(c!=2) {
        cin >> s;
        if(s>=0&&s<=10) {
            sum+=s;
            c++;
        }
        else {
            cout << "nota invalida" << "\n";
        }
    }
    cout << fixed << setprecision(2);
    cout << "media = " << sum/2 << "\n";
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