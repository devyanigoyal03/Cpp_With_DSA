#include <iostream>
using namespace std;

void bubblesort(int arr[20], int n)
{
    if (n == 0 || n == 1)
    {
        return;
    }

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
        }
    }
    bubblesort(arr, n - 1);
}
int main()
{
    int n, arr[20];
    cout << "Enter the value of n\n";
    cin >> n;
    cout << "Enter the values of array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bubblesort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] <<" ";
    }
}