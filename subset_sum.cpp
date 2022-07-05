#include <bits/stdc++.h>
using namespace std;

void func(int idx, vector<int> &ans, int sum, vector<int> &num)
{
    if (idx == num.size())
    {
        ans.push_back(sum);
        return;
    }

    func(idx + 1, ans, sum + num[idx], num);
    func(idx + 1, ans, sum, num);
}
vector<int> subsetSum(vector<int> &num)
{
    // This question is a type of subset sum
    vector<int> ans;
    int sum = 0;
    func(0, ans, sum, num);
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
}