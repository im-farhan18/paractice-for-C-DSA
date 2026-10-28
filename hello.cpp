#include <iostream>
#include <climits>
#include <string>
using namespace std;

void insertion()
{
}

void SelectionSort(int arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    int minIDX = i;
    for (int j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[minIDX])
      {
        minIDX = j;
      }
    }
    swap(arr[i], arr[minIDX]);
  }
  for (int i = 0; i < n; i++)
  {
    cout << arr[i];
  }
  cout<<endl;
}
int main()
{

  int arr[5] = {5, 4, 1, 3, 2};
  int n = sizeof(arr) / sizeof(arr[0]);

  SelectionSort(arr, n);

  return 0;
}