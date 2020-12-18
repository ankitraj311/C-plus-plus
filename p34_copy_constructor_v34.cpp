#include<iostream>
using namespace std;
//Copy Constructor






class Number
{
  int a;
	public:
              Number() //If no value is passed to the constructor
	      {
	        a = 0;
	      }

              Number(int num)
	      {
	        a = num;
	      }
              //When no copy constructor is found. Complier we supply its copy Constructor.
              Number(Number &obj) //Object Passed
	      {
	        cout <<"Copy Constructor Called"<<endl;
	        a = obj.a;
	      }

	      void display()
	      {
	        cout <<"The value of num is "<<a<<endl;
	      }
};

int main()
{
  Number x, y, z(10),z2;
  //Number x(10);
/*  int num;
  cout <<"Enter value of num";
  cin >>num;*/
  x.display();
  y.display();
  z.display();
  Number z1(z); //Copy Constructor invoked, We are making object here
  z1.display(); 
  z2 = z; //Copy constructor will not call bcoz obj z2 is already made.  Number z3;
  Number z3 = z;
  z3.display();
}
