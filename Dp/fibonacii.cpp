#include <iostream>
#include <vector>
using namespace std;

int fib(int n, vector<int> &dp) {
    if (n <= 1) return n;
    if (dp[n] != -1) return dp[n];
    return dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    vector<int> dp(n + 1, -1); // Initialize dp array with -1

    int result = fib(n, dp);

    cout << "Fibonacci number at position " << n << " is: " << result << endl;

    return 0;
}