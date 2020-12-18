#include<iostream>
//#include<bits/stdc++.h>
using namespace std;










class Complex
{
  int a, b;
	public:
                void getData(void)
                {
		  static int i = 1;
                  cout <<"Object "<<i <<" Value of a is "<<a <<"And value of b is "<<b<<endl;
		  i++;
                }

  Complex(int,int);
};

Complex :: Complex(int x, int y) //Parametrize Constructor Creating
{
  a = x;
  b = y;
}

int main()
{
  Complex a(10,20),b(30,40),c(50,60); //Implicit declaration of Constructor
  //Complex a = Complex(10,20);  This is Explict Declaration of Constructor
  a.getData();  
  b.getData();  
  c.getData();  
}
