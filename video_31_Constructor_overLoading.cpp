#include<iostream>
using namespace std;

class Complex
{
	int x,y;
	public:
		void printNumber()
		{
			cout<<x<<" + "<<y<<"i"<<endl;
		}
		Complex()
		{
			x = 0;
			y = 0;
		}
		Complex(int a, int b)
		{
			x=a;
			y=b;
		}
		Complex(int a)
		{
			x=a;
			y=0;
		}
};



int main()
{
	Complex c1(10,20);
	c1.printNumber();
	Complex c2(500);
	c2.printNumber();
	Complex c3;
	c3.printNumber();
	return 0;
}

