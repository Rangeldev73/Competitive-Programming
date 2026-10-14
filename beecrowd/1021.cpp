#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    double valor_inicial;
    cin >> valor_inicial;
    
    ll v = round(valor_inicial * 100);
    
    ll n100 = v / 10000; v %= 10000;
    ll n50  = v / 5000;  v %= 5000;
    ll n20  = v / 2000;  v %= 2000;
    ll n10  = v / 1000;  v %= 1000;
    ll n5   = v / 500;   v %= 500;
    ll n2   = v / 200;   v %= 200;
    
    ll m1   = v / 100;   v %= 100;
    ll m50  = v / 50;    v %= 50;
    ll m25  = v / 25;    v %= 25;
    ll m10  = v / 10;    v %= 10;
    ll m5   = v / 5;     v %= 5;
    ll m1_cent = v; 
    
    cout << "NOTAS:\n";
    cout << n100 << " nota(s) de R$ 100.00\n";
    cout << n50  << " nota(s) de R$ 50.00\n";
    cout << n20  << " nota(s) de R$ 20.00\n";
    cout << n10  << " nota(s) de R$ 10.00\n";
    cout << n5   << " nota(s) de R$ 5.00\n";
    cout << n2   << " nota(s) de R$ 2.00\n";
    
    cout << "MOEDAS:\n";
    cout << m1      << " moeda(s) de R$ 1.00\n";
    cout << m50     << " moeda(s) de R$ 0.50\n";
    cout << m25     << " moeda(s) de R$ 0.25\n";
    cout << m10     << " moeda(s) de R$ 0.10\n";
    cout << m5      << " moeda(s) de R$ 0.05\n";
    cout << m1_cent << " moeda(s) de R$ 0.01\n";
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