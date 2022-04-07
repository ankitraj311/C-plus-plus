/*
 * How to make a class Friend ? What is need of it?
 * Agar mai bahut sare Function bna deta hu, jo Calculator class k andar defined hai to.
 * Mujko bar bar ja kr har ek function ko Complex class k andar Frined krna hoga. Joki bahut time takibg
 * hoga isyle hum pouri ki puro classs ko hi Frind kr dege
 * Claculator Class ka koi bhi Function mere Private Members ko acces kr sakta hai
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
		/*
		friend int Calculator :: sumRealComplex(Complex, Complex); 

		//didn't provide the defination of the class because if we go in that way then its means we have started to use a class which doesn't exist at all. Thats why we are providing only defination of the function
		friend int Calculator :: sumComComplex(Complex, Complex); 
		//didn't provide the defination of the class because if we go in that way then its means we have started to use a class which doesn't exist at all. Thats why we are providing only defination of the function
		*/
		friend class Calculator; // All the Members of the Calculator class Function can access the Private data of Complex Class by this declaration
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
