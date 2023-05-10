#include <iostream>
using namespace std;
int getpivot(int arr[20], int n)
{
    int left = 0;
    int right = n - 1;
    while (left < right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] >= arr[0])
        {
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }
    return right;
}
int main()
{
    int n, arr[20], i;
    cout << "Enter the value of n\n";
    cin >> n;
    cout << "Enter the values of array in ascending order\n";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    getpivot(arr, n);
}