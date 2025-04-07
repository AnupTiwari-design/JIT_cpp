#include <iostream>
using namespace std;

void linear(int arr[], int n, int key) {
    bool found = false;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Element found at position " << i + 1 << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Element not found" << endl;
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;
    
    cout << "Enter the element to search: ";
    cin >> key;

    linear(arr, n, key);

    return 0;
}