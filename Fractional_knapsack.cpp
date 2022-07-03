#include <bits/stdc++.h>
using namespace std;

double maximumValue(vector<pair<int, int>> &items, int n, int w)
{
    // Write your code here.
    // ITEMS contains {weight, value} pairs.

    // Make a vector of {double,int}
    vector<pair<double, int>> ans;
    for (int i = 0; i < n; i++)
        ans.push_back({(double)items[i].second / (double)items[i].first, i});
    sort(ans.rbegin(), ans.rend());

    double ct = 0.0;
    int weight = 0;
    for (int i = 0; i < n; i++)
    {
        int temp = weight;
        weight += items[ans[i].second].first;
        if (weight <= w)
            ct += (double)items[ans[i].second].second;
        else
        {
            int diff = w - temp;
            ct += ((double)diff * ans[i].first);
            break;
        }
    }
    cout << fixed << setprecision(2);
    return ct;
}

int main()
{
    int n, w;
    cin >> n >> w;

    vector<pair<int, int>> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i].first;
    for (int i = 0; i < n; i++)
        cin >> v[i].second;

    cout << maximumValue(v, n, w) << endl;
}