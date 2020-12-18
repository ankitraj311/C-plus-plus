#include<iostream>
using namespace std;










class Complex
{

  int a, b;
	public:
//Creating a constructor
//Constructor is a special member of function with same name as th class. 
//It is used to initilize the object of class. It is Automatically invoked.
//whenever Object is Created..
  void printData()
  {
    static int i = 0;
    cout <<"a is " <<a <<" AND b is " <<b<<" Object no  c"<<++i<<endl;
  }
  Complex(void); //Constructor Declaration
};
//Complex :: printData();
Complex :: Complex(void)
{
  a = 10;
  b = 20;
  cout <<"Hello";
}

int main()
{
  Complex c1, c2, c3;
  c1.printData();
  c2.printData();
  c3.printData();
  return 0;
}
