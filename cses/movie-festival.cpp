#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n;
    cin >> n;
    vector<pair<int, int>> movies;
    for(int i=0;i<n;i++) {
        int a,b;
        cin >> a >> b;
        movies.push_back({b, a});
    }
    sort(movies.begin(), movies.end());

    int max_movies = 0;
    int current_end_time=0;

    for(auto movie : movies) {
        int movie_start = movie.second;
        int movie_end = movie.first;

        if(movie_start>=current_end_time) {
            max_movies++;
            current_end_time=movie_end;
        }
    }
    cout << max_movies << "\n";
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
STUDY GUIDE: INTERVAL SCHEDULING (MOVIE FESTIVAL)
=============================================================================

1. THE GREEDY CHOICE CRITERIA
   - To maximize the number of movies watched, we must ALWAYS pick the movie 
     that FINISHES EARLIEST. 
   - By freeing up our schedule as soon as possible, we maximize the remaining 
     time left in the day to fit more movies.

2. TRICKING THE 'sort()' FUNCTION
   - C++ sorts vectors of pairs looking strictly at '.first' first.
   - By pushing elements into the vector as {end_time, start_time}:
       * movie.first  -> represents the end time.
       * movie.second -> represents the start time.
   - Calling sort() automatically chains the movies from the one that finishes 
     earliest to the one that finishes latest.

3. THE ITERATION STRATEGY
   - We keep an anchor variable 'current_end_time' initialized at 0.
   - We loop through the sorted movies:
     * If movie.second (start) >= current_end_time, it means there is no overlap!
       We add it to our counter and move our 'current_end_time' to this movie's end.
     * If movie.second (start) < current_end_time, it overlaps with what we are 
       currently watching. We simply skip it.

Complexity: O(n log n) due to the sorting step. The loop itself is purely linear O(n).
=============================================================================
*/