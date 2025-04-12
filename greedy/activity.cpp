#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second; // Sort by end time
}

int activitySelection(vector<int> start, vector<int> end) {
    int n = start.size();
    vector<pair<int, int>> activities;

    for (int i = 0; i < n; i++) {
        activities.push_back({start[i], end[i]});
    }

    sort(activities.begin(), activities.end(), compare);

    int count = 1; // First activity always selected
    int lastEnd = activities[0].second;

    for (int i = 1; i < n; i++) {
        if (activities[i].first >= lastEnd) {
            count++;
            lastEnd = activities[i].second;
        }
    }

    return count;
}

int main() {
    vector<int> start = {1, 3, 0, 5, 8, 5};
    vector<int> end =   {2, 4, 6, 7, 9, 9};

    cout << "Maximum number of activities: "
         << activitySelection(start, end) << endl;

    return 0;
}