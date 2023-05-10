#include <iostream>
using namespace std;
void printarr(int arr[20], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int insertionSort(int arr[20], int n)
{
    int i, j, temp;
    for (i = 1; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] >= temp) // move elem. greater than temp to one pos ahead from current pos
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1] = temp;
    }
    cout << "Sorted array is\n";
    printarr(arr, n);
    return 0;
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
    insertionSort(arr, n);
}