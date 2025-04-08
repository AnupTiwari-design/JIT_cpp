#include <iostream>
#include <vector>
using namespace std;

void countSort(vector<int>& arr) {
    int max_val = *max_element(arr.begin(), arr.end());
    vector<int> count(max_val + 1, 0);

    for (int num : arr)
        count[num]++;

    int index = 0;
    for (int i = 0; i <= max_val; i++) {
        while (count[i]--) {
            arr[index++] = i;
        }
    }
}

int main() {
    vector<int> arr = {4, 2, 2, 8, 3, 3, 1};
    
    countSort(arr);

    for (int num : arr)
        cout << num << " ";

    return 0;
}