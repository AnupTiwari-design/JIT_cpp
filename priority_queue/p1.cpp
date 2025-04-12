#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> maxHeap;

    maxHeap.push(20);
    maxHeap.push(40);
    maxHeap.push(10);
    maxHeap.push(50);

    cout << "Max Heap (Top Element): " << maxHeap.top() << endl;

    cout << "Elements: ";
    while (!maxHeap.empty()) {
        cout << maxHeap.top() << " ";
        maxHeap.pop();
    }

    return 0;
}