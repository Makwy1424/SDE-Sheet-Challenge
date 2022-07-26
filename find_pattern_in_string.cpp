// Problem Link
//  https://www.codingninjas.com/codestudio/problems/find-pattern-in-string_1112621?topList=striver-sde-sheet-problems&leftPanelTab=1

#include <bits/stdc++.h>
using namespace std;

vector<int> prefix_function(string s)
{
    // It return a vector that contains longest length of prefix and suffix in the string
    int n = (int)s.size();

    vector<int> ans(n, 0);
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k <= i; k++)
        {
            if (s.substr(0, k) == s.substr(i - k + 1, k))
                ans[i] = k;
        }
    }
    return ans;
}

vector<int> prefix_function2(string s)
{
    int n = (int)s.size();
    vector<int> ans(n, 0);
    for (int i = 1; i < n; i++)
    {
        int j = ans[i - 1];

        // That means if we don't find a matching with the elements.
        //
        while (j > 0 && s[j] != s[i])
            j = ans[j - 1];

        if (s[j] == s[i])
            j++;

        ans[i] = j;
    }
    return ans;
}
bool findPattern(string p, string s)
{
    vector<int> prefix = prefix_function2(p);

    int i = 0, j = 0;
    while (i < s.size())
    {
        if (s[i] == p[j])
        {
            i++;
            j++;
        }
        else
        {
            if (j != 0)
                j = prefix[j - 1];
            else
                i++;
        }
        if (j == p.size())
            return true;
    }
    return false;
}

int main()
{
    string s = "ababcabcabababd", p = "aaabd";
    // bool cndtn = findPattern(p, s);
    // cout << cndtn << endl;
    vector<int> ans = prefix_function(p);
    for (auto &val : ans)
    {
        cout << val << " ";
    }
}