#include <iostream>
#include <climits>
#include <string>
using namespace std;

void printarr(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << ",";
  }
}
void BubbleSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
  printarr(arr, n);
}

int main()
{

  int arr[5] = {5, 4, 1, 3, 2};
  int n = sizeof(arr) / sizeof(arr[0]);

  BubbleSort(arr, n);

  return 0;
}