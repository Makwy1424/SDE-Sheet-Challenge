#include <bits/stdc++.h>
using namespace std;
string func(string str, int i, int n)
{
    if (i == n)
        return str;

    string ans;
    int ct = 0;
    for (int i = 0; i < str.size(); i++)
    {
        if (ct == 0)
            ct++;
        else
        {
            if (str[i] == str[i - 1])
                ct++;
            else
            {
                ans += (to_string(ct) + str[i - 1]);
                ct = 1;
            }
        }
    }
    if (ct != 0)
        ans += (to_string(ct) + str[str.size() - 1]);

    return func(ans, i + 1, n);
}
string writeAsYouSpeak(int n)
{
    return func("1", 1, n);
}

int main()
{
    return 0;
}