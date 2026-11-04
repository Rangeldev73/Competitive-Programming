#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
  double salary;
    cin >> salary;

    double reajust = 0;
    int percentual = 0;

    if (salary <= 400.00) {
        percentual = 15;
    } else if (salary <= 800.00) {
        percentual = 12;
    } else if (salary <= 1200.00) {
        percentual = 10;
    } else if (salary <= 2000.00) {
        percentual = 7;
    } else {
        percentual = 4;
    }

    reajust = salary * (percentual / 100.00);
    double new_salary = salary + reajust;

    cout << fixed << setprecision(2);
    
    cout << "Novo salario: " << new_salary << "\n";
    cout << "Reajuste ganho: " << reajust << "\n";
    cout << "Em percentual: " << percentual << " %\n";
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