#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    string s;
    cin >> s;
    int size = s.size();
    char cr = s[0];
    int biggrep=1,repcount=1;
    for(int i=1;i<size;i++) {
        char currchar = s[i];
        if(currchar==cr) {
            repcount++;
        }
        else {
            cr = currchar;
            repcount=1;
        }
        if(repcount>biggrep) biggrep=repcount;
    }
    cout << biggrep << "\n";
}
//1123455566
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