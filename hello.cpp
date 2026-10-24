#include <iostream>
#include <climits>
using namespace std;

int ReverseArr(int *arr, int n, int key)
{
  int copyArr[n];
  for (int i = 0; i < n; i++){
    int j = n-i-1;
    copyArr[i] = arr[j];
  }
  
  for(int i = 0;i,n;i++){
    arr[i] = copyArr[i];
  }
}

int main()
{

  int arr[5] = {1, 3, 9, 12, 15};
  int n = sizeof(arr) / sizeof(arr[0]);
  return 0;
}
