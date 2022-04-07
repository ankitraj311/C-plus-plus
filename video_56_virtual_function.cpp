#include<iostream>
using namespace std;

//Virtual function is used to override the default behaviour
//
//polymorphism is the property, where the class which are belong to different - different class respond to same mesage
//Run time polymorhism is going in
//
//Actual compiler bind the object with function is done during run time

class BaseClass
{
	public:
		int baseVar=100;
		//void display()
		virtual void display()
		{
			cout<<"Value of baseVar is "<<baseVar<<endl;

		}

};


class DerivedClass : public BaseClass
{
	public:
		int derivedVar=500;
		void display()
		{
			cout<<"Value of derivedVar is "<<derivedVar<<endl;
		}

};




int main()
{
	BaseClass objBase;
	DerivedClass objDerived;
	BaseClass * pointerBase;
	DerivedClass * pointerDerived;

	pointerBase = &objDerived;
	pointerBase->display();


	//This is the Normal behaviour of program but if you want to run the fucntion from the class
	//from where object is made, Not from where Pointer is made the use Virtual function
	//
	//Replace void display() by virtual void display();
}

