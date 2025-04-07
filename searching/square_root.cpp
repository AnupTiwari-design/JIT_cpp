#include<iostream>
using namespace std;

int squareroot(int n) {
    int l = 0;
    int h = n;
    while (l <= h) {
        int mid = (l + h) / 2;
        int sq = mid * mid;

        if (sq == n) {
            return mid;
        }
        else if (sq > n) {
            h = mid - 1;
        }
        else {
            l = mid + 1;
        }
    }
    return -1; // not a perfect square
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int result = squareroot(n);
    if (result != -1)

    cout << "Square root is: " << result << endl;
    else
        cout << "Not a perfect square." << endl;

    return 0;
}