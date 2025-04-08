#include <iostream>
#include <vector>
using namespace std;

void leftRotate(vector<int>& v, int k) {
    int n = v.size();
    k = k % n;
    vector<int> temp;

    for (int i = k; i < n; i++) {
        temp.push_back(v[i]);
    }
    for (int i = 0; i < k; i++) {
        temp.push_back(v[i]);
    }
    v = temp;
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    int k = 2;

    leftRotate(v, k);

    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}