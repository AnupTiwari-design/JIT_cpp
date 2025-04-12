#include <iostream>
#include <vector>
#include <string>
using namespace std;

int lcs(string X, string Y) {
    int n = X.size();
    int m = Y.size();
    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (X[i - 1] == Y[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
        }
    }

    return dp[n][m];
}

int main() {
    string X, Y;
    cout << "Enter first string: ";
    cin >> X;
    cout << "Enter second string: ";
    cin >> Y;

    int length = lcs(X, Y);
    cout << "Length of LCS: " << length << endl;

    return 0;
}