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

class myB: public myC
{
public:
  myB()  { }
  void print()
  {
  	cout<<"Class B print."<<endl;
  }
};

class myA: public myB
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
    myA indicator;
    indicator.print();
    indicator.myB::print();
    indicator.myC::print();
    return 0;
}
