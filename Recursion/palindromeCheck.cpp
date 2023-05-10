#include <bits/stdc++.h>
using namespace std;

bool palindrome(string s, int i, int j)
{
    if (i > j)
    {
        return 1;
    }

    if (s[i] != s[j])
    {
        return 0;
    }
    else
    {
        return palindrome(s, i + 1, j - 1);
    }
}

int main()
{
    string s;
    cin >> s;
    bool ans = palindrome(s, 0, s.size() - 1);
    if (ans == 1)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not a Palindrome";
    }
}