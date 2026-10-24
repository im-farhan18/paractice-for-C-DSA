#include <iostream>
using namespace std;

int main()
{
//   int arr[] = {1, 3, 9, 12, 15, 6, 34, 8, 6, 7};
//   int n = sizeof(arr) / sizeof(arr[0]);
//   cout << arr << "\n";
// int y = 25;

int a = 10;
int *aptr = &a;
cout<<"aptr = "<<aptr<<endl;
cout<<"*aptr = "<<*aptr<<endl;

cout<<endl<<endl;


aptr++;
cout<<"aptr++ = "<<aptr++<<endl;
cout<<"*aptr++ = "<<*aptr++<<endl;



  return 0;
}