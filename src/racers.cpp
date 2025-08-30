#include "racers.h"
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

int getMaxRacers(const vector<int>& speed, int k) {
    int n = speed.size();
    unordered_map<int, vector<int>> pos;

    // Collect positions of each speed
    for (int i = 0; i < n; i++) {
        pos[speed[i]].push_back(i);
    }

    int ans = 0;

    // For each speed value, process positions
    for (auto &p : pos) {
        const vector<int> &indices = p.second;
        int l = 0;
        for (int r = 0; r < (int)indices.size(); r++) {
            while (l <= r && (indices[r] - indices[l] + 1) - (r - l + 1) > k) {
                l++;
            }
            ans = max(ans, r - l + 1);
        }
    }

    return ans;
}
