#include <bits/stdc++.h>
using namespace std;

bool areAnagram(string &str1, string &str2)
{
    int a[27] = {0}, b[27] = {0};
    for (int i = 0; i < str1.size(); i++)
    {
        a[str1[i] - 'a']++;
        b[str2[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (a[i] != b[i])
            return false;
    }
    return true;
}
int main()
{
    return 0;
}