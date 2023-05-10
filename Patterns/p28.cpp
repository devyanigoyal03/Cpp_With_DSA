#include <iostream>
using namespace std;

void Pattern(int N)
{
    // Enter your code here
    for (int i = 0; i < N; i++)
    {
        int t = i * 6;
        for (int j = 0; j < N; j++)
        {
            int k = j * 4;
            cout << t + k << " ";
        }
        cout << endl;
    }
}

int main()
{

    int n;
    cout << "Enter the value of n\n";
    cin >> n;
    Pattern(n);
}

/*
Sample Input:-
5

Sample Output:-
0 4 8 12 16
6 10 14 18 22
12 16 20 24 28
18 22 26 30 34
24 28 32 36 40

*/