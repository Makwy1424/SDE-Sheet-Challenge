#include <bits/stdc++.h>

void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    // It will take 50min for me
    for (int is = 0, js = 0, ie = n - 1, je = m - 1; is < n / 2 && ie >= 0 && js < m / 2 && je >= 0; is++, ie--, js++, je--)
    {
        int pre;
        for (int i = js; i <= je; i++)
        {
            if (i == js)
            {
                pre = mat[is][i];
                mat[is][i] = mat[is + 1][js];
            }
            else
                swap(mat[is][i], pre);
        }
        for (int i = is + 1; i <= ie; i++)
        {
            swap(mat[i][je], pre);
        }
        for (int i = je - 1; i >= js; i--)
        {
            swap(pre, mat[ie][i]);
        }
        for (int i = ie - 1; i >= is; i--)
        {
            swap(pre, mat[i][js]);
        }
    }
}