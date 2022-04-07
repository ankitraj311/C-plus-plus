#include<iostream>
using namespace std;

class Complex
{
	int real, imag;
	public:
		//Old Function
		void getData()
		{
			cout<<"Real data value by old Method is "<<real<<endl;
			cout<<"Imag data value by old Method is "<<imag<<endl;
		}
		void setData( int a, int b)
		{
			real=a;
			imag=b;
		}

		//New Function 
		void getNewData()
		{
			cout<<"Real data value by object Pointer is "<<real<<endl;
			cout<<"Imag data value by object pointer is "<<imag<<endl;
		}
		void setNewData( int a, int b)
		{
			real=a;
			imag=b;
		}
};

int main()
{
	//Basic Old
	Complex c1;
	c1.setData(1,5);
	c1.getData();

	//New Gold
	Complex *ptr=&c1; //Object pointer
	(*ptr).setNewData(100,500);
	(*ptr).getNewData();


	//Object By new keyword
	//Complex *ptr=new Complex; //This will also works
	//
	//(*ptr).  ==  ptr->
	//

	//Use of arrow opertaor :  Iss pointer ko dereference kro or uska funnction use kro
	ptr->setNewData(15,20);
	ptr->getNewData();

	
	//Object by new
	Complex *ptrold = new Complex;
	(*ptrold).setNewData(700,800);
	(*ptrold).getNewData();



	//Object by new
	Complex *ptroldarrow = new Complex;
	ptroldarrow->setNewData(5656,23999);
	ptroldarrow->getNewData();

	//Array of Object
	Complex *newptr = new Complex[4];
	newptr->setNewData(1000,2000);
	newptr->getNewData();


	(newptr+1)->setNewData(3000,4000);
	(newptr+1)->getNewData();


	(newptr+2)->setNewData(5000,6000);
	(newptr+2)->getNewData();


	(newptr+3)->setNewData(7000,8000);
	(newptr+3)->getNewData();
}
