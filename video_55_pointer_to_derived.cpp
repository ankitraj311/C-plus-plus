#include<iostream>
using namespace std;

class BaseClass
{
	public:
		int varBase=10;
		void display()
		{
			cout<<"Displaying Base class Function call and value is "<<varBase<<endl;
		}
		
};

class DerivedClass : public BaseClass
{
	public:
		int varDerived=20;
		void display()
		{
			cout<<"Displaying Derived  Base class Function call and value is "<<varDerived<<endl;
		}
};



int main()
{
	BaseClass * pointerBase; //pointerBase is the Pointer of BaseClass type to hold BaseClass obj
	BaseClass obj_Base; //Declaring object  
	DerivedClass obj_Derived; //Declaring object of derived class
	pointerBase = &obj_Derived; //Assigning Derived object to Base pointer, this is known as late binding when we are running diaply function of derived class by base class pointer
	pointerBase->display();
	(*pointerBase).display(); //Above two are same
	pointerBase->varBase=500;
//	pointerBase->varDerived=500; //Ye access nahi hoga
	pointerBase->display();

	DerivedClass * derivedPointer;
	derivedPointer = &obj_Derived;
	derivedPointer->varDerived=500; //Ye access nahi hoga
	derivedPointer->display();

}
