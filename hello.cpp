#include <iostream>
using namespace std;

void printArr(int *arr, int n)
{
  for (int i = 0; i < n; i++) {
    cout << arr[i] << ",";
  }
  cout << endl;
}

void ReverseArr(int *arr, int n)
{
  int *copyArr = new int[n];
  for (int i = 0; i < n; i++) {
    copyArr[i] = arr[n - i - 1];
  }

  for (int i = 0; i < n; i++) {
    arr[i] = copyArr[i];
  }
  delete[] copyArr;
}

int main()
{
  int arr[5] = {1, 3, 9, 12, 15};
  int n = sizeof(arr) / sizeof(arr[0]);
  ReverseArr(arr, n);
  printArr(arr, n);
  return 0;
}