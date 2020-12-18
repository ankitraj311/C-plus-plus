#include<iostream>
//#include<bits/stdc++.h>
using namespace std;










class Point
{
  int x, y;
	public:
                Point(int,int);
                void displayPoint(void)
                {
		  cout <<"("<<x <<", "<<y <<")"<<endl;
                }

};

Point :: Point(int a, int b) //Parametrize Constructor Creating
{
  x = a;
  y = b;
}

int main()
{
  Point a(10,20),b(30,40),c(50,60); //Implicit declaration of Constructor
  //Complex a = Complex(10,20);  This is Explict Declaration of Constructor
  a.displayPoint();  
  b.displayPoint();  
  c.displayPoint();  
}
