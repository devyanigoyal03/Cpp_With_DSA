#include <bits/stdc++.h>
using namespace std;
int fact(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }

    return n*fact(n-1);
}
int main()
{
    /*
     *  Write your code here.
     *  Read input as specified in the question.
     *  Print output as specified in the question.
     */
    int n;
    cin >> n;
    cout << fact(n);
}