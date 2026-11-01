#include <iostream>
using namespace std;

// Brute force
//  by using extra copy array
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
  cout << endl;
}

// Optimized method
// Without using extra space

void ReversArrayOptmz(int arr[], int n)
{
  int start = 0, end = n - 1;
  while (start < end)
  {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;

    start++;
    end--;
  }
  for (int i = 0; i < n; i++)
  {
    cout << arr[i]<<","<<endl;
  }
}

int main()
{

  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int n = sizeof(arr) / sizeof(arr[0]);
 // ReverseArr(arr, n);
  ReversArrayOptmz(arr,n);

  return 0;
}