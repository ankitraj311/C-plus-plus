#include<iostream>
using namespace std;









class Employee
{
  private:
	  int a, b, c;
  public:
	  int d,e;
  void setData(int x, int y, int z, int k, int j);
  void getData()
  {
    cout <<"Value of a is "<<a<<endl;
    cout <<"Value of b is "<<b<<endl;
    cout <<"Value of c is "<<c<<endl;
    cout <<"Value of d is "<<d<<endl;
    cout <<"Value of e is "<<e<<endl;
  }
};

void Employee :: setData(int a1, int b1, int c1, int k , int j)
{ 
  a = a1;
  b = b1; 
  c = c1;
  d = k;
  e = j;
}

int main()
{
  Employee ankit;
  //ankit.d = 100;
  //ankit.e = 200;
  ankit.setData(1,2,4, 5, 6);
  ankit.getData();
  return 0;
                  
}

