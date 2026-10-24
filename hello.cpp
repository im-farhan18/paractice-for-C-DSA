#include <iostream>
using namespace std;

void printarr(int *arr, int n)
{
  for (int i = 0; i <= n; i++)
  {
    cout << arr[i] << ",";
  }
  cout<<endl;
}
void ReverseArr(int *arr, int n)
{
  int start = 0, end = n - 1;
  while (start <= end)
  {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = arr[temp];
    start++;
    end--;
  }
}

int main()
{
  int arr[5] = {1, 3, 9, 12, 15};
  int n = sizeof(arr) / sizeof(arr[0]);
  ReverseArr(arr, n);
  printarr(arr, n);
  return 0;
}