#include <bits/stdc++.h>
using namespace std;

 int atoi(string str)
{
    int sign = 1, i = 0, ans = 0;
    if (str[i] == '-'){
        sign = -1;
        i++;
    }
    for (; i < str.size(); i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
            ans = ans * 10 + (str[i] - '0');
    }
    return ans * sign;
}
int main()
{

    return 0;
}