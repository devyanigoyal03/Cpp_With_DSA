#include <iostream>
using namespace std;
int minIndex(int arr[], int i, int j)
{
    if (i == j)
    {
        return i;
    }
    int k = minIndex(arr, i + 1, j);
    return (arr[i] < arr[k]) ? i : k;
}
void selectionSort(int arr[], int n, int index=0)
{
    if (index==n)
    {
        return;
    }
    int k=minIndex(arr,index,n-1);

    if(k!=index)
    {
        swap(arr[k],arr[index]);
    }
    selectionSort(arr,n,index+1);
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
    selectionSort(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}