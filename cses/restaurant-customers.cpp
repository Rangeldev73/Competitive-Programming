#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> events;
    for(int i=0;i<n;i++) {
        int a,b;
        cin >> a >> b;
        events.push_back({a, 1}); 
        events.push_back({b, -1});
    }
    sort(events.begin(), events.end());

    int current_customers = 0;
    int max_customers = 0;

    for(auto event : events) {
        current_customers += event.second;
        max_customers = max(max_customers, current_customers);
    }
    cout << max_customers << "\n";
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
/*
=============================================================================
STUDY GUIDE: HOW THIS ALGORITHM WORKS (SWEEP-LINE / EVENT-BASED APPROACH)
=============================================================================

1. THE 'pair<int, int>' STRUCTURE
   - A pair binds two integer values into a single item.
   - It acts like a card or ticket with two physical fields:
     * .first  -> Stores the time (the exact hour/minute).
     * .second -> Stores the action (+1 if a person enters, -1 if a person leaves).
   - "vector<pair<int, int>> events" creates a list of these two-valued cards.

2. CREATING INDEPENDENT EVENTS
   - Instead of tracking a customer as a whole block, we split their visit into 
     two separate facts in time inside the 'for' loop:
     * events.push_back({a, 1})  -> A card saying: "At time 'a', +1 person arrived".
     * events.push_back({b, -1}) -> A card saying: "At time 'b', -1 person left".

3. HOW 'sort()' OPERATES ON PAIRS
   - By default, C++ sorts pairs looking strictly at the FIRST element (.first).
   - Since we stored the timestamps in .first, calling sort() automatically
     arranges all our independent cards in perfect chronological order.
   - Example: Unsorted [{5, 1}, {8, -1}, {2, 1}, {6, -1}]
     After sort() -> [{2, 1}, {5, 1}, {6, -1}, {8, -1}] (ordered timeline!)

4. THE MODERN 'for(auto event : events)' LOOP
   - This loop sweeps through our sorted timeline from start to finish.
   - 'auto' lets the compiler automatically know that 'event' is a pair card.
   - 'event.second' injects either +1 or -1 directly into 'current_customers'.

5. STEP-BY-STEP SIMULATION (Using the sorted example above)
   - Step 1: Card {2, 1}
     * current_customers becomes 0 + 1 = 1.
     * max_customers becomes max(0, 1) = 1.
   - Step 2: Card {5, 1}
     * current_customers becomes 1 + 1 = 2 (Peak overlap!).
     * max_customers becomes max(1, 2) = 2 (New historical record).
   - Step 3: Card {6, -1}
     * current_customers becomes 2 - 1 = 1.
     * max_customers stays max(2, 1) = 2 (Record not broken).
   - Step 4: Card {8, -1}
     * current_customers becomes 1 - 1 = 0.
     * max_customers stays 2.

Final Output printed: 2
=============================================================================
*/