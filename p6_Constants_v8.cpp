//1111 Constants
//2222 Manipulator 
//3333  Operators Precedence
#include<iostream> // Manipulator endl
#include<iomanip>  //manipulators setw
using namespace std;
int main()
{




//Constants
//11111111
/*
  int a = 34;
  cout <<"Value of a is "<<a<<endl;
  a = 50;
  cout <<"Value of a now is "<<a<<endl;
  const int b = 100;
  cout <<"Value of B is "<<b<<endl;
  // b = 200; Constant Change
  cout <<"Value of B now is "<<b<<endl;
*/


//2222 Manipulator 
/*

  int a = 3, b = 78, c = 1234;
  cout <<"value of a is "<<a<<endl;
  cout <<"value of b is "<<b<<endl;
  cout <<"value of c is "<<c<<endl;


  cout <<"value of a is "<<setw(4)<<a<<endl;
  cout <<"value of b is "<<setw(4)<<b<<endl;
  cout <<"value of c is "<<setw(4)<<c<<endl;
*/


//3333 Operators Precedence
  int a = 3, b = 4;
 // int c = ((a*5)+b);
  int c = ((((a*5)+b)-45)+87); //When precedence become Equal then use Associativity left to Right for +&-
  cout <<c;


  return 0;

}
