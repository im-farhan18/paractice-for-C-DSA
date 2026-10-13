#include <iostream>
using namespace std;

void add(int a, int b)
{
    cout << a + b<<endl;
}

void add(int a, int b, int c)
{
    cout << a + b + c<<endl;
}

int main()
{
   add(10, 20);  
   add(10, 20,30);      


    return 0;
}
