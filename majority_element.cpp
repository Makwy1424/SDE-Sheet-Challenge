#include <bits/stdc++.h>
// using namespace std;
int findMajorityElement(int arr[], int n)
{
    map<int, int> m;
    for (int i = 0; i < n; i++)
        m[arr[i]]++;
    for (auto val : m)
        if (val.second > n / 2)
            return val.first;
    return -1;
}