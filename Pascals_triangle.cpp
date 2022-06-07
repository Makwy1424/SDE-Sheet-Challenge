#include <bits/stdc++.h>
vector<vector<long long int>> printPascal(int n)
{
    vector<vector<long long int>> mat(n);
    for (long long int i = 0; i < n; i++)
    {
        for (long long int j = 0; j <= i; j++)
        {
            if (j == 0 || j == i)
                mat[i].push_back(1);
            else
                mat[i].push_back(mat[i - 1][j - 1] + mat[i - 1][j]);
        }
    }
    return mat;
}
