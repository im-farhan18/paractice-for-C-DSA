#include <iostream>
#include <climits>
using namespace std;

void SubArrayMax(int arr[], int n)

{
  int MaxSum = INT_MIN;
  for (int start = 0; start < n; start++)
  {
    for (int end = start; end < n; end++)
    {
      int CurSum = 0;
      for (int i = start; i <= end; i++)
      {
        CurSum += arr[i];
      }
      cout << CurSum << ",";
      MaxSum = max(MaxSum, CurSum);
    }
    cout << endl;
  }
  cout << "MaxSum = " << MaxSum << endl;
}

int main()
{
  int arr[] = {2, -3, 6, -5, 4, 2};
  int n = sizeof(arr) / sizeof(arr[0]);
  SubArrayMax(arr, n);

  return 0;
}