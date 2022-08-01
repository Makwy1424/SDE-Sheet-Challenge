#include <bits/stdc++.h>
using namespace std;
#define ll long long

void func(int i, string s, vector<string> &ans)
{
    if (i == s.size())
    {
        ans.push_back(s);
        return;
    }

    for (int j = i; j < s.size(); j++)
    {
        swap(s[i], s[j]);
        func(i + 1, s, ans);
        swap(s[i], s[j]);
    }
}
vector<string> findPermutations(string &s)
{
    vector<string> ans;
    func(0, s, ans);
    return ans;
}

int main()
{

    return 0;
}