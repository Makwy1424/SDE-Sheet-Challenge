#include <bits/stdc++.h>
/*

    intervals[i][0] = start point of i'th interval
    intervals[i][1] = finish point of i'th interval

*/

vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{

    sort(intervals.begin(), intervals.end());
    vector<vector<int>> ans;
    for (int i = 0; i < intervals.size(); i++) {
        vector<int> temp(2, 0);
        temp[0] = intervals[i][0];
        int st = intervals[i][1];
        while (((i + 1) < intervals.size()) && ( st >= intervals[i + 1][0])) {
            i++;
            st = max(st, intervals[i][1]);
        }
        temp[1] = st;
        ans.push_back(temp);
    }
    return ans;
}
