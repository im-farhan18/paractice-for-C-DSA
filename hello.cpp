#include <iostream>
#include <climits>   

using namespace std;

void maxSubarraySum1(int *arr, int n){
int MaxSum = INT_MIN;
  for ( int start = 0 ; start < n ; start++){
    int CurrSum = 0 ;
    for(int end = start;end<n;end++){
      CurrSum += arr[end];
      MaxSum = max(MaxSum,CurrSum);
    }
  }
  cout<<"maximum subarray sum = "<<MaxSum<<endl;
}


int main()
{
  int arr[] = {2, -3, 6, -5, 4, 2};
  int n = sizeof(arr) / sizeof(arr[0]);

  maxSubarraySum1(arr, n);
  return 0;
}
