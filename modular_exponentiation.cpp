#include <bits/stdc++.h>
int modularExponentiation(int x, int n, int m)
{
    if (n == 0)
        return 1;
    long long temp = modularExponentiation(x, n / 2, m) % m;
    long long ans = (temp * temp) % m;
    if (n & 1)
        ans = (ans * x) % m;
    return ans;
}