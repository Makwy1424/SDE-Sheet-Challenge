#include <bits/stdc++.h>
using namespace std;

int findMinimumCoins(int amount)
{
    //[1, 2, 5, 10, 20, 50, 100, 500, 1000]
    vector<int> coins = {1, 2, 5, 10, 20, 50, 100, 500, 1000};
    int idx = upper_bound(coins.begin(), coins.end(), amount) - coins.begin();
    idx--;
    long long ans = 0, ct = 0;
    for (int i = idx; i >= 0; i--)
    {
        int fac = amount / coins[i];
        ans += fac;
        amount -= (fac * coins[i]);
    }
    return ans;
}

int main()
{
    cout << findMinimumCoins(60) << endl;
}