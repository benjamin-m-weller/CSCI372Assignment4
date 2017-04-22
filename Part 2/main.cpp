#include <iostream>
#include <string>

using namespace std;
 
 
class myC
{
public:
  myC()  { }
  void print()
  {
  	cout<<"Class C print."<<endl;
  }
};

class myB: myC
{
public:
  myB()  { }
  void print()
  {
  	cout<<"Class B print."<<endl;
  }
};

class myA: myB
{
public:
  myA()  { }
  void print()
  {
  	cout<<"Class A print."<<endl;
  }
};
 
int main()
{
    myA indicator();
    indicator->print();
    return 0;
}
