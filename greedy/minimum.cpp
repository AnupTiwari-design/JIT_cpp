#include <iostream>
#include <algorithm>
using namespace std;

int findMinPlatforms(int arrival[], int departure[], int n) {
    sort(arrival, arrival + n);
    sort(departure, departure + n);

    int platforms = 0, maxPlatforms = 0;
    int i = 0, j = 0;

    while (i < n && j < n) {
        if (arrival[i] <= departure[j]) {
            platforms++;
            i++;
        }
        else {
            platforms--;
            j++;
        }
        maxPlatforms = max(maxPlatforms, platforms);
    }

    return maxPlatforms;
}

int main() {
    int arrival[] = {900, 940, 950, 1100, 1500, 1800};
    int departure[] = {910, 1200, 1120, 1130, 1900, 2000};
    int n = sizeof(arrival) / sizeof(arrival[0]);

    cout << "Minimum number of platforms required = "
         << findMinPlatforms(arrival, departure, n) << endl;

    return 0;
}