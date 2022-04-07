//we can pass the paramter as Object
//Complex sum program
//int a, int b are the member of this class they can be accessed by the function declared inside the class
//setData, setDataBySum, display can access these 2 variable of the classs
#include<iostream>
using namespace std;
class Complex
{
	int a;
	int b;
	public:
		void setData(int i, int j); 
		void setDataBySum(Complex new_obj1, Complex new_obj2);
		void display();
};


void Complex :: setData(int i, int j)
{
	a=i;
	b=j;
}


void Complex :: setDataBySum(Complex new_obj1, Complex new_obj2)
{
	a = new_obj1.a + new_obj2.a;
	b = new_obj1.b + new_obj2.b;
}


void Complex :: display()
{
	cout<<a<<" + i"<<b<<endl;
}


int main()
{
	Complex c1,c2,c3;
	c1.setData(1,2);
	c2.setData(3,4);
	c3.setDataBySum(c1,c2);
	c1.display();
	c2.display();
	c3.display();
}
