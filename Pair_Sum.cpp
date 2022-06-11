#include <bits/stdc++.h>
vector<vector<int>> pairSum(vector<int> &arr, int s)
{
    map<int, int> m;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        m[arr[i]]++;
    }

    vector<vector<int>> ans;
    for (auto &val : m)
    {
        int sec = s - val.first;
        if (m[sec] != 0)
        {
            if (sec == val.first)
            {
                int ct = (val.second * (val.second - 1)) / 2;
                for (int i = 0; i < ct; i++)
                    ans.push_back({sec, sec});
                val.second = 0;
                continue;
            }
            int ct = val.second * m[sec];
            for (int i = 0; i < ct; i++)
            {
                ans.push_back({min(val.first, sec), max(val.first, sec)});
            }
            val.second = 0;
            m[sec] = 0;
        }
    }
    return ans;
}