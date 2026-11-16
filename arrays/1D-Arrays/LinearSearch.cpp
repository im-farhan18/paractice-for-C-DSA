#include <iostream>
using namespace std;

int LinearSearch(int *arr, int n, int key)
{
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == key)
    {
      return i;
    }
  }

  return -1;
}

int main()
{

  int arr[] = { 23,4, 5,3, 3, 23, 44,55,34,3,21,3,556,43,24,};
  int n = sizeof(arr) / sizeof(arr[0]);

  int key;
  cout << "enter the key to find :";
  cin >> key;

  cout << LinearSearch(arr, n, key) << endl;

  return 0;
}