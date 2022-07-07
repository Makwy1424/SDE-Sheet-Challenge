#include <bits/stdc++.h>
using namespace std;

int romanToInt(string s)
{
    /*
    I             1
V             5
X             10
L             50
C             100
D             500
M             1000
    */
    int ct = 0;
    map<char, int> m;
    m['I'] = 1;
    m['V'] = 5;
    m['X'] = 10;
    m['L'] = 50;
    m['C'] = 100;
    m['D'] = 500;
    m['M'] = 1000;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (m[s[i]] >= m[s[i + 1]])
            ct += m[s[i]];
        else
            ct -= m[s[i]];
    }
    ct += m[s[s.size() - 1]];
    return ct;
}

int main()
{
}