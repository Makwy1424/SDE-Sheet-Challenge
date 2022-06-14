#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<int> majorityElementII(vector<int> &arr)
{
    ll n = arr.size();
    unordered_map<ll, ll> m;
    for (ll i = 0; i < n; i++)
        m[arr[i]]++;
    vector<int> ans;
    for (auto val : m)
    {
        if (val.second > n / 3)
            ans.push_back(val.first);
    }
    return ans;
}