#include <iostream>
#include <climits>
using namespace std;

void SubArray(int *arr, int n)
{

  for (int start = 0; start < n; start++)
  {
    for (int end = start; end < n; end++)
    {
     
      for (int i = start; i <= end; i++)
      {
        cout << arr[i];
      }
      cout << ", ";
    }
    cout << endl;
  }
}

int main()
{

  int arr[] = {2,-3,6,-5,4,2};
  int n = sizeof(arr) / sizeof(arr[0]);
  return 0;
}
