#include<iostream>
using namespace std;



/*
 * Syntax for multiple inheritance
 *
 * class derived : visiblity-mode-1 base1:, visibility-mode-2 base2
 * 
 */

class Base1
{
	protected :
		int base1var;
	public:
		void set_base1(int value)
		{
			base1var = value;
		}

};


class Base2
{
	protected :
		int base2var;
	public:
		void set_base2(int value)
		{
			base2var = value;
		}

};


class Base3
{
	protected :
		int base3var;
	public:
		void set_base3(int value)
		{
			base3var = value;
		}

};

/*
 * Derived class will look something like this
 *base1var is protected
 *base2var is protected
 *base3var is protected
 *set_base1 is public
 *set_base2 is public
 *set_base3 is public
 *show  is also public
 */


class Derived : public Base1, public Base2, public Base3
{
	public:
		void show()
		{
			cout<<"The value of base1 variable is "<<base1var<<endl;
			cout<<"The value of base2 variable is "<<base2var<<endl;
			cout<<"The value of base3 variable is "<<base3var<<endl;
			cout<<"The sum of both variable is    "<<(base1var + base2var + base3var)<<endl;
		}


};



int main()
{

	Derived d1;
	d1.set_base1(10);
	d1.set_base2(30);
	d1.set_base3(40);
	d1.show();
}


