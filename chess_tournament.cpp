#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool chk(vector<int> &positions, int n, int c, int i)
{
    int count = 1;
    int previous = positions[0];
    for (int j = 1; j < n; j++)
    {
        if (positions[j] - previous >= i)
        {
            count++;
            previous = positions[j];
        }
    }

    if (count < c)
        return false;
    return true;
}
int chessTournament(vector<int> positions, int n, int c)
{
    sort(positions.begin(), positions.end());
    int ans = 0;
    int maxPos = positions[n - 1];
    int minPos = 1;
    while (minPos < maxPos)
    {
        int mid = (minPos + maxPos) / 2;
        if (chk(positions, n, c, mid))
        {
            ans = max(ans, mid);
            minPos = mid + 1;
        }
        else
            maxPos = mid - 1;
    }
    if (minPos == maxPos && chk(positions, n, c, maxPos))
        ans = max(ans, maxPos);
    return ans;
}

int main()
{

    return 0;
}