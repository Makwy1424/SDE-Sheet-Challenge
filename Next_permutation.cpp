#include <bits/stdc++.h>
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    /*
2
3
1 2 3
5
2 3 1 4 5
*/
    if (n == 1)
        return permutation;
    vector<int> temp; // For storing backward elements
    for (int i = n - 1; i >= 1; i--)
    {
        if (permutation[i - 1] < permutation[i])
        {
            temp.push_back(permutation[i]);
            int idx = lower_bound(temp.begin(), temp.end(), permutation[i - 1]) - temp.begin(); // index from last n-1==0,n-2==1
            idx = n - 1 - idx;
            swap(permutation[i - 1], permutation[idx]);
            sort(permutation.begin() + i, permutation.end());
            return permutation;
        }
        else
            temp.push_back(permutation[i]);
    }
    // That means no greater permutation possible here.
    sort(permutation.begin(), permutation.end());
    return permutation;
}