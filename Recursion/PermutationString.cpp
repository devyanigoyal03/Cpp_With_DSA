#include <bits/stdc++.h>
using namespace std;
void Permutation(string &s, int index, int n)
{
    if (index == n)
    {
        cout << s << endl;
    }
    for (int i = index; i <= n; i++)
    {
        swap(s[index], s[i]);
        Permutation(s, index + 1, n);
        // backtrack
        swap(s[index], s[i]);
    }
}
int main()
{
    string s;
    cout << "Enter string : " << endl;
    cin >> s;
    cout << "Permutation of given string :\n";
    Permutation(s, 0, s.size() - 1);
    return 0;
}