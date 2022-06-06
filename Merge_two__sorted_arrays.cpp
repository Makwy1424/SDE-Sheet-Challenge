#include <bits/stdc++.h>
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
    int a = 0, b = 0;
    vector<int> ans;
    while (a < m and b < n) {
        if (arr1[a] >= arr2[b])
            ans.push_back(arr2[b++]);
        else
            ans.push_back(arr1[a++]);
    }

    while (a < m)ans.push_back(arr1[a++]);
    while (b < n)ans.push_back(arr2[b++]);
    return ans;
}