#include <bits/stdc++.h>
using namespace std;

int maximumActivities(vector<int> &start, vector<int> &finish)
{
    int ct = 0;
    vector<pair<int, int>> v;
    for (int i = 0; i < start.size(); i++)
        v.push_back({finish[i], start[i]});
    sort(v.begin(), v.end());
    int ans = 0, temp = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i].second >= temp)
        {
            temp = v[i].first;
            ans++;
        }
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> start(n), finish(n);
        for (int i = 0; i < n; i++)
            cin >> start[i];
        for (int i = 0; i < n; i++)
            cin >> finish[i];

        cout << maximumActivities(start, finish) << endl;
    }
}
