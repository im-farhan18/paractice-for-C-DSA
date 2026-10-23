#include <iostream>
#include <climits>
using namespace std;

int main()
{

  int arr[5] = {1, 3, 9, 12, 5};
  int n = sizeof(arr) / sizeof(arr[0]);
  int min = arr[0];


  for (int i = 0; i < n; i++)
  {
    if(arr[i]<min){
      min  = arr[i];
      
    }
  }

  cout <<"minimum value in array = "<< min <<endl;
  return 0;
}
