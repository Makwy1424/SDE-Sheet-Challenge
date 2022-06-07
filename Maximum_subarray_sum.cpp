#include <bits/stdc++.h>
long long maxSubarraySum(int arr[], int n)
{
    long long Sum = 0, pSum = 0;
    for (int i = 0; i < n; i++)
    {
        pSum += arr[i];
        Sum = max(Sum, pSum);
        pSum = max(0LL, pSum);
    }
    return Sum;
}