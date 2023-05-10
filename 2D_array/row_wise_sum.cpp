#include <iostream>
using namespace std;
                // Sum Row Wise
int main()
{
    int arr[10][10];
    int i, j, n;
    cout << "Enter the value of n\n";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        int sum=0;
        for (j = 0; j < n; j++)
        {
            sum+=arr[i][j];
        }
        cout<<sum<<endl;
    }
    return 0;
}
