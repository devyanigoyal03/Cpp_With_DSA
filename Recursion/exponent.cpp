#include <bits/stdc++.h>
using namespace std;

// Find m^n
int exp(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n == 1)
    {
        return m;
    }

    int ans = exp(m, n / 2);

    if (n % 2 == 1) // odd
    {
        return m * ans * ans;
    }
    else
    {
        return ans * ans;
    }
}

int main()
{
    int m, n;
    cin >> m >> n;
    cout << exp(m, n);
}