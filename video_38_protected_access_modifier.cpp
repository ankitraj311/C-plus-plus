#include<iostream>
using namepsace std;

//Private ko app inherit nhi kr ssakte hooo, to protected aata hai
//Protected private jesa hi hai bus, Inherit ho sakta hai

class Base
{
	protected :
		int a;
	private :
		int b;

};

/*
 *			Public Derived		Protected Derived 	Private Derived
 *
 * 1. Private		Not Inherited		Not Inherited		Not Inherited
 * 2. Protected		Protected		Protected		Private
 * 3. Public		Public 			Protected 		Private
 */



class Derived : protected Base
{


};


int main()
{

	Base b;
	Derived d;
	cout<<b.a; //A can't be print because a is declared as protected 
	//This variablw can be access by only Derived Classs

	return 0;

}


