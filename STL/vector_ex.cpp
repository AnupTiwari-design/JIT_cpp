#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v(3);

    v[0] = 10;
    v[1] = 20;
    v[2] = 30;

    v.push_back(40);
    v.push_back(50);

    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}