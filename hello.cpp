#include <iostream>
using namespace std;

int main()
{
    int arr[3][4];
    // int n = sizeof(arr) / sizeof(arr[0]);
    int n = 5, m = 5;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;
    return 0;
}