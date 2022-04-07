//Copy Constructor
#include<iostream>
using namespace std;

class Number
{

	int a;
	public:
		Number();
		//Number(int con_value); //Both will work
		Number(int); //Both Will Work
		Number(Number &); // Both Will work
		//Number(Number &obj); // Both Will work
		void display();
};

		Number :: Number()
		{
			cout<<"Entered into Empty Constructor"<<endl;
			a=0;
		}
		Number :: Number(int con_value)
		{
			a=con_value;
		}
		Number :: Number (Number &obj) //This directly accept the refernce of the object
		{
			cout<<"Copy Constructor called"<<endl;
			a = obj.a;
		}

		void Number :: display()
		{
			cout<<"Value of a is "<<a<<endl;
		}

int main()
{
	Number x, y, z(50), z2;
	x.display();
	y.display();
	z.display();
	Number z1(z);
	z1.display(); //we are passing z object in z1 object and will make similar constructor
	z2=z; //Copy constructor will not get called because object is already created.
	Number z3=z; //Copy constructor will get called here. because we creating the object here
	
}

