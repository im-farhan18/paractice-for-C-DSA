#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{
    int st = 0, end = n - 1;

    while (st <= end)
    {
        int mid = st + (end - st) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            st = mid + 1;
        else
            end = mid - 1;
    }

    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 14, 16};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 6;

    cout << BinarySearch(arr, n, key) << endl;
    return 0;
}