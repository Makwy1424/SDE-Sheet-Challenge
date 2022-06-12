#include <bits/stdc++.h>

pair<int, int> missingAndRepeating(vector<int> &arr, int n)
{
    vector<int> a(n + 1, 0);
    for (int i = 0; i < n; i++)
    {
        a[arr[i]]++;
    }

    pair<int, int> p;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == 0)
        {
            p.first = i;
        }
        else if (a[i] == 2)
        {
            p.second = i;
        }
    }
    return p;
}
