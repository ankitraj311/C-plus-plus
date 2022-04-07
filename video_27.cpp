/*
 * What will going to see ?
 * Forward declaration of ac Class.
 * How to make a function of a class, Friend to the other Class.
 * we created two function, which are access the private data of another class Function. One is suming the Real part and another is suming the Complex Part
 */


#include<iostream>
using namespace std;

class Complex;
class Calculator
{
	public:
	int add(int a, int b)
	{
		return (a+b);
	}
	int sumRealComplex(Complex,Complex); //Dont write Complex o1, Complex o2, Because you only told that class is Complex. IN the Upper Lines So Dont Mention about
	int sumComComplex(Complex,Complex); //Dont write Complex o1, Complex o2, Because you only told that class is Complex. IN the Upper Lines So Dont Mention about
};

class Complex
{
	int a;
	int b;
	public:
		void setData(int i, int j); 
		void display();
		friend int Calculator :: sumRealComplex(Complex, Complex); //didn't provide the defination of the class because if we go in that way then its means we have started to use a class which doesn't exist at all. Thats why we are providing only defination of the function
		friend int Calculator :: sumComComplex(Complex, Complex); //didn't provide the defination of the class because if we go in that way then its means we have started to use a class which doesn't exist at all. Thats why we are providing only defination of the function
};

void Complex :: setData(int i, int j)
{
	a=i;
	b=j;
}

void Complex :: display()
{
	cout<<a<<" + i"<<b<<endl;
}


int Calculator :: sumRealComplex(Complex o1, Complex o2)
{
	return (o1.a + o2.a);
}

int Calculator :: sumComComplex(Complex o1, Complex o2)
{
	return (o1.b + o2.b);
}

int main()
{
	Complex c1,c2,c3;
	c1.setData(1,2);
	c2.setData(3,4);
	c1.display();
	c2.display();
	Calculator calc;
	int res = calc.sumRealComplex(c1, c2);
	int resComp = calc.sumComComplex(c1, c2);
	cout<<"The Sum of the real COmplex and CompComlpex is "<<res<<" and "<<resComp;
}
