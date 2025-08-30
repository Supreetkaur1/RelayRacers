#include <bits/stdc++.h>
#include "racers.h"
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; // number of test cases
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> speed(n);
        for (int i = 0; i < n; i++) cin >> speed[i];

        cout << getMaxRacers(speed, k) << "\n";
    }
    return 0;
}
