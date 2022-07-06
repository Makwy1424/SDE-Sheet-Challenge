#include <bits/stdc++.h>
using namespace std;

void func(int idx, vector<int> &temp, vector<int> &v, vector<vector<int>> &ans)
{
    if (idx == v.size())
    {
        ans.push_back(temp);
        return;
    }

    func(idx + 1, temp, v, ans);
    temp.push_back(v[idx]);
    func(idx + 1, temp, v, ans);
    temp.pop_back();
}
vector<vector<int>> pwset(vector<int> v)
{
    sort(v.begin(), v.end());
    vector<vector<int>> ans;
    vector<int> temp;
    func(0, temp, v, ans);
    return ans;
}

int main()
{
}