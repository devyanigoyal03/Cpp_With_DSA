#include <iostream>
using namespace std;
void insertionSort(int arr[], int n)
{
    if (n == 0 || n == 1)
    {
        return;
    }
    insertionSort(arr,n-1);
    //insert last ele at its correct pos
    int temp=arr[n-1]; 
    int j=n-2;
    while(j>=0 && arr[j]>temp)
    {
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=temp;
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
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}