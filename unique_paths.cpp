#include <bits/stdc++.h>
using namespace std;
// TLE
int func(int i, int j, vector<vector<int>> &dp, int m, int n)
{
    if (i == m && j == n)
        return 1;
    if (dp[i][j] != -1)
        return dp[i][j];
    int ct = 0;
    if (j + 1 <= n)
        ct += func(i, j + 1, dp, m, n);
    if (i + 1 <= m)
        ct += func(i + 1, j, dp, m, n);

    return dp[i][j] = ct;
}
int uniquePaths(int m, int n)
{
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, -1));
    int ans = func(1, 1, dp, m, n);
    return ans;
}