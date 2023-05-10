#include <iostream>
using namespace std;
void printarr(int arr[20],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int selectionSort(int arr[20], int n)
{
    int i,j,min_index;
    for(i=0;i<n-1;i++)
    {
        min_index=i;
        for(j=i+1; j<n; j++)
        {
            if(arr[j]<arr[min_index])
                min_index=j;
        }
        swap(arr[min_index],arr[i]);
    }
    cout<<"Sorted array is\n";
    printarr(arr,n);
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
    selectionSort(arr, n);
}