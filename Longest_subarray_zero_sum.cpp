#include <bits/stdc++.h>
using namespace std;

int LongestSubsetWithZeroSum(vector<int> arr)
{
    vector<int> sum(arr.size(), 0);
    sum[0] = arr[0];
    int n = arr.size();
    for (int i = 1; i < n; i++)
        sum[i] = sum[i - 1] + arr[i];
    int longestLength = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int s = sum[j] - sum[i] + arr[i];
            if (s == 0)
                longestLength = max(longestLength, j - i + 1);
        }
    }
    return longestLength;
}

int main()
{
    return 0;
}