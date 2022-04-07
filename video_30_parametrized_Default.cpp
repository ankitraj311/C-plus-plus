#include<iostream>
using namespace std;

class Complex
{
	int a,b;
	public:
		//Complex(int,int); //Parametriz Constructor declaration
		Complex(int,int); //Parametriz Constructor declaration

		void printNumber()
		{
			cout<<a<<" + "<<b<<"i"<<endl;
		}
};

Complex :: Complex(int x, int y) //Passing value for Parametrize constructor
{
	a = x;
	b = y;
}

int main()
{
	Complex c1(10,20); //Implicit call for Parametriz Constructor
	c1.printNumber(); 
	//Explicit call for Parametriz Constructor
	Complex c2 = Complex(30,40);
	c2.printNumber();
	return 0;
}

