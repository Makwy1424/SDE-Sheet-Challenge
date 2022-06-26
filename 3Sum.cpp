// This gives a TLE error.
#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> findTriplets(vector<int> arr, int n, int K)
{

    map<int, int> m;
    for (int i = 0; i < n; i++)
    {
        if (m[arr[i]] <= 2)
            m[arr[i]]++;
    }

    vector<int> poss;
    for (auto val : m)
        poss.push_back(val.first);

    // Stored all the unique elements inside the Possible vector
    set<vector<int>> s;
    for (int i = 0; i < poss.size(); i++)
    {
        for (int j = i; j < poss.size(); j++)
        {
            if (i == j && m[poss[i]] < 2)
                continue;
            int num = K - poss[i] - poss[j];
            if (num == poss[i] && poss[i] == poss[j] && m[num] < 3)
                continue;
            if ((num == poss[i] || num == poss[j]) && m[num] < 2)
                continue;

            if (m[num] != 0)
            {
                vector<int> t = {poss[i], poss[j], num};
                sort(t.begin(), t.end());
                s.insert(t);
            }
        }
    }
    if (s.size() == 0)
        return {};
    vector<vector<int>> ans;
    for (auto &val : s)
    {
        ans.push_back(val);
    }
    return ans;
}

// Got a correct Anmswer after watch Strivers lecture
vector<vector<int>> findTriplets(vector<int> arr, int n, int K)
{

    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;

    // a mover and a=0 intially
    for (int i = 0; i < arr.size() - 2; i++)
    {
        if (i == 0 || (i > 0 && arr[i] != arr[i - 1]))
        {
            int lo = i + 1, hi = arr.size() - 1, sum = K - arr[i];
            while (lo < hi)
            {
                if (arr[lo] + arr[hi] == sum)
                {
                    vector<int> temp = {arr[i], arr[lo], arr[hi]};
                    ans.push_back(temp);
                    while (lo < hi && arr[lo] == arr[lo + 1])
                        lo++;
                    while (lo < hi && arr[hi] == arr[hi - 1])
                        hi--;
                    lo++;
                    hi--;
                }
                else if (arr[lo] + arr[hi] < sum)
                {
                    lo++;
                }
                else
                {
                    hi--;
                }
            }
        }
    }

    if (ans.size() == 0)
        return {};
    return ans;
}