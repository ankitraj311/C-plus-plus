//111 How to use value of Global Value.
//222 By Default Decimal number is Double.
//333 How to find size of Operator.
//4444 Reference Variable
//5555 Type casting
#include<iostream>
using namespace std;
int c = 45;
int main()
{
	
	
	
//111 How to use value of Global Value.
//11111111111111	
/*
  int a, b ,c;
  
  cout <<"Enter Value of a";
  cin >>a;

  cout <<"Enter Value of b";
  cin >>b;

  cout <<"Value of a is "<<a <<" Value of b is "<<b<<endl;
  cout <<"Value  of c is "<<a+b<<endl;
  cout <<"Global Value of c is "<<::c;*/



//222 By Default Decimal number is Double.
//222222222222222222
/*  
  float d = 34.4;
  //float d = 34.4f; //Use When you want decimal to be used as Float
  long double e = 34.4;
  cout <<"Value of d is "<<d<<endl <<"Value of e is "<<e;
  */

	
//333 How to find size of Operator.
//3333333333333333333
/*

  //float d = 34.4;
  float d = 34.4f; //Use When you want decimal to be used as Float
  long double e = 34.4l;
  cout <<"The Size of 34.4  is"<<sizeof(34.4)<<endl;
  cout <<"The Size of 34.4f is"<<sizeof(34.4f)<<endl;
  cout <<"The Size of 34.4F is"<<sizeof(34.4F)<<endl;
  cout <<"The Size of 34.4l is"<<sizeof(34.4l)<<endl;
  cout <<"The Size of 34.4L is"<<sizeof(34.4L)<<endl;
*/


//4444 Reference Variable
//444444444444

/*
  float x = 455;
  float &y = x; //I want y as reference to X;
  cout <<x <<" & y is " <<y;
*/


//5555 Type casting
//555555555555


  int a = 45;
  float b = 45.56;
  cout <<"The Value of a is "<<a<<endl;
  cout <<"The Value of a is "<<(float)a<<endl;
  cout <<"The Value of a is "<<float(a)<<endl;
  cout <<"The Value of b is "<<int(b)<<endl;
  cout <<"The Value of b is "<<(int)b<<endl;

  cout <<"The Value of a+b is "<<a + b<<endl;
  cout <<"The Value of a+b is "<<a + int(b)<<endl;
  cout <<"The Value of a+b is "<<a + (int)b<<endl;


  return 0;

}
