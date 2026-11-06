#include <iostream>
#include <climits>
using namespace std;

// Brute force method

void maxSubarraySum1(int *arr, int n)
{
    int MaxSum = INT_MIN;
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            int currSum = 0;
            for (int i = start; i <= end; i++)
            {
                currSum += arr[i];
            }
            cout << currSum << ",";
            MaxSum = max(MaxSum, currSum);
        }
        cout << endl;
    }
    cout << "Maximum Subarray Sum = " << MaxSum << endl;
}

//  Slightly Optimization
void maxSubarraySum2(int *arr, int n)
{
    int MaxSum = INT_MIN;
    for (int start = 0; start < n; start++)
    {
        int currSum = 0;
        for (int end = start; end < n; end++)
        {
            currSum += arr[end];
            MaxSum = max(MaxSum, currSum);
        }
      
    }
    cout << "Maximum Subarray Sum = " << MaxSum << endl;
}
int main()
{
    int arr[] = {2, -3, 6, -5, 4, 2};
    int n = 6;
    maxSubarraySum1(arr, n);
    maxSubarraySum2(arr, n);


    return 0;
}