#include<iostream>
using namespace std;


class Complex
{
	int a, b;
	public:
	//Creating a Constructor
	//Constructor is a special member function with the same name as of class
	//It is used to initilize the object of the class
	//It is automaticlly invoked whenever an object is created
	//For constructor thier is no need of return type.
	//But for Fucntion their is need of return type.
	
	Complex (void); //Constructor declaration
	void printComplex()
	{
		cout<<a<<" + "<<b<<"i";
	}

};

Complex :: Complex(void)// This is default constructor. because didn't take any parameter.
{
	a = 0;
	b = 0;
}


int main()
{

	Complex c1; // Constructor will get automaticlly invoke after creation of the object.
	// So it will set the value of a and b.
	c1.printComplex();
		return 0;
}


//Characterstics of Constructor.
//1. It should be declared in the object section.
//2.It will automaticaly invike when object will get created.
//3. They can't return value and don't have retrun type.
//4. It cant have default argument.
//5.We can't refer to their sddress.


