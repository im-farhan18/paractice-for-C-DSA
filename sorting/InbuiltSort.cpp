#include <iostream>
#include <algorithm>
using namespace std;

void Print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int arr[] = {1, 4, 1, 3, 2, 4, 3, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr + 1, arr + 8);
    Print(arr, n);
    return 0;
}