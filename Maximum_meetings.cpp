#include <bits/stdc++.h>
using namespace std;
vector<int> maximumMeetings(vector<int> &start, vector<int> &end)
{
    vector<pair<int, int>> m;
    for (int i = 0; i < start.size(); i++)
        m.push_back({end[i], i});
    sort(m.begin(), m.end());
    vector<int> ans;
    int previousEnd = -1;

    for (auto &val : m)
    {
        if (previousEnd == -1)
        {
            ans.push_back(val.second + 1);
            previousEnd = val.first;
        }
        else
        {
            if (start[val.second] > previousEnd)
            {
                ans.push_back(val.second + 1);
                previousEnd = val.first;
            }
        }
    }
    return ans;
}
int main()
{
    // I gonna do it by using Priority queue.
    return 0;
}