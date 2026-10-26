#include <iostream>
#include <climits>
#include <string>
using namespace std;

class car{
  string name;
  string color;

  public:
  car(){
    cout<<"cunstructer is called.object being created..\n";
  }
  void start () {
    cout << " car has started..\n";
  }

  void stop(){
    cout<<"car has stopped..\n";
  }
};

int main()
{

  car c1;

  return 0;
}