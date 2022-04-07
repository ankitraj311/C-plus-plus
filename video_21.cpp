#include<iostream>
using namespace std;

class Employee
{
	private:
		int a,b,c;
	public:
		int d,e;
	void setData(int a1,int b1,int c1);// Declaration
	void getData() //Declaration and Defination
	{
		cout<<"The value of a is"<<a<<endl;
		cout<<"The value of b is"<<b<<endl;
		cout<<"The value of c is"<<c<<endl;
		cout<<"The value of d is"<<d<<endl;
		cout<<"The value of e is"<<e<<endl;
	}
};

void Employee :: setData(int a1, int b1, int c1)// Defination
{
	a = a1;
	b = b1; 
	c = c1;
}
// :: Spoc resolution

int main()
{

	Employee e1;
	e1.setData(10,20,30);
	e1.d=100;
	e1.e=200;
	e1.getData();
}


