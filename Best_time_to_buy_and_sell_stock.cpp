#include <bits/stdc++.h>
int maximumProfit(vector<int> &prices)
{
    int n = prices.size();
    vector<int> last(n - 1);
    last[0] = prices[n - 1];
    for (int i = n - 2, j = 1; i > 0; i--, j++)
    {
        last[j] = max(prices[i], last[j - 1]);
    }

    int diff = 0;
    for (int i = 0, j = n - 2; i < n - 1; i++, j--)
    {
        diff = max(diff, last[j] - prices[i]);
    }

    return diff;
}