#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

pair<string, int> lexicographically_smallest_path(vector<string>& grid) {
    int n = grid[0].size();
    vector<vector<int>> dp(2, vector<int>(n + 1, 0));

    // Base case
    dp[0][0] =(grid[0][0]=='1'?1:0);
     dp[1][0] = (grid[1][0]=='1'?1:0);

    // Fill the DP table
    for (int j = 1; j <= n; ++j) {
        dp[0][j] = min(dp[0][j - 1], dp[1][j - 1] + (grid[0][j - 1] - '0'));
        dp[1][j] = min(dp[1][j - 1], dp[0][j - 1] + (grid[1][j - 1] - '0'));
    }

    // Reconstruct the path
    string path;
    int i = (dp[0][n] <= dp[1][n]) ? 0 : 1;
    int j = n;
    while (j > 0) {
        path += (i == 0) ? '0' : '1';
        if (i == 0)
            i = (dp[0][j] <= dp[1][j] + (grid[0][j - 1] - '0')) ? 0 : 1;
        else
            i = (dp[1][j] <= dp[0][j] + (grid[1][j - 1] - '0')) ? 1 : 0;
        --j;
    }
    reverse(path.begin(), path.end());

    // Count the number of paths yielding the lexicographically smallest string
    int count = 0;
    for (int j = 0; j <= n; ++j) {
        if (dp[0][j] == dp[0][n] || dp[1][j] == dp[1][n])
            ++count;
    }

    return {path, count};
}

int main() {
      #ifndef ONLINE_JUDGE
       freopen("IO/input.txt", "r", stdin);
       freopen("IO/outbox.txt", "w", stdout);
       freopen("IO/Error.txt", "w", stderr);
 #endif
    int t;
        cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<string> grid(2);
        for (int i = 0; i < 2; ++i)
            cin >> grid[i];
        
        auto result = lexicographically_smallest_path(grid);
        cout << result.first << endl;
        cout << result.second << endl;
    }
    return 0;
}
