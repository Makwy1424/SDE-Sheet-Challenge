#include <bits/stdc++.h>
#include <vector>
using namespace std;
bool findTargetInMatrix(vector<vector<int>> &mat, int m, int n, int target)
{
    // Binary search ho sakta hai
    int lo = 1, hi = m * n;
    while (lo <= hi)
    {
        int mid = (lo + hi) / 2; // 1+9/2;
        int r = ceil(mid / n), c = mid % n;
        if (mat[r - 1][c - 1] == target)
            return true;
        if (mat[r - 1][c - 1] >= target)
            hi = mid;
        else
            lo = mid + 1;
    }
    return false;
}