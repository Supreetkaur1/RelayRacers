#include <iostream>
#include <vector>
#include "racers.h"
using namespace std;

int main() {
    vector<int> s1 = {1,2,1,2,1};
    cout << getMaxRacers(s1, 1) << " (expected 2)\n";

    vector<int> s2 = {1,3,2,2,1,2,1};
    cout << getMaxRacers(s2, 3) << " (expected 3)\n";

    vector<int> s3 = {1,4,4,2,2,4};
    cout << getMaxRacers(s3, 2) << " (expected 3)\n";

    return 0;
}
