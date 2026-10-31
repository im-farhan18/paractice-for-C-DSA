#include <iostream>
using namespace std;

void ReverseArr(int *arr, int n)
{
  int CopyArr[n];
  for (int i = 0; i < n; i++)
  {
    int j = n - i - 1;
    CopyArr[i] = arr[j];
  }
  for (int i = 0; i < n; i++)
  {
    arr[i] = CopyArr[i];
  }
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << ",";
  }
  cout<<endl;
}

int main()
{

  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int n = sizeof(arr) / sizeof(arr[0]);
  ReverseArr(arr, n);

  return 0;
}