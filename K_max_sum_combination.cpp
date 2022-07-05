#include <bits/stdc++.h>
using namespace std;
vector<int> kMaxSumCombination(vector<int> &a, vector<int> &b, int n, int k)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            ans.push_back(a[i] + b[j]);
    }
    sort(ans.begin(), ans.end());
    vector<int> ss;
    for (int i = n * n - 1; k > 0; i--)
    {
        k--;
        ss.push_back(ans[i]);
    }
    return ss;
}

int main()
{
}