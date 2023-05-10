/* Print this pattern

            0 1 2 3 4
        0   3 3 3 3 3
        1   3 2 2 2 3
        2   3 2 1 2 3
        3   3 2 2 2 3
        4   3 3 3 3 3
*/
#include <iostream>
using namespace std;
int main()
{

    int n;
    cout << "Enter the value of n\n";
    cin >> n;
    int size = n + (n - 1);
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = n;
    }
    // Pattern Logic
    int left = 0;
    int right = size;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << arr[j]<<" ";
        }
        if (i < size / 2)
        {
            for (int j = left + 1; j < right - 1; j++)
            {
                arr[j]--;
            }
            left++;
            right--;
        }
        if (i >= size / 2)
        {
            left--;
            right++;
            for (int d = left + 1; d < right - 1; d++)
            {
                arr[d]++;
            }
        }
        cout<<endl;
    }
}
