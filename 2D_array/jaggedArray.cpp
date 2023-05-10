#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    int **arr = new int *[rows]; // allocate memory for array of pointers
    int *cols = new int[rows];

    cout << "\nEnter the number of columns you want in each row: ";
    for (int i = 0; i < rows; i++)
    {
        cin >> cols[i];
        arr[i] = new int[cols[i]]; // allocate memory for each row
    }

    // fill the array with values
    cout << "\nEnter the value : \n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols[i]; j++)
        {
            cin >> arr[i][j];
        }
    }

    // print the array
    cout << "\njagged array is :\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols[i]; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // free the memory
    for (int i = 0; i < rows; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}