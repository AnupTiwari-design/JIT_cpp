#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int, vector<int>, greater<int>> minHeap;

    minHeap.push(20);
    minHeap.push(40);
    minHeap.push(10);
    minHeap.push(50);

    cout << "Min Heap (Top Element): " << minHeap.top() << endl;

    cout << "Elements: ";
    while (!minHeap.empty()) {
        cout << minHeap.top() << " ";
        minHeap.pop();
    }

    return 0;
}