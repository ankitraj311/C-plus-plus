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
		void display();
		friend Complex setDataBySum(Complex new_obj1, Complex new_obj2);
};


void Complex :: setData(int i, int j)
{
	a=i;
	b=j;
}


Complex setDataBySum(Complex new_obj1, Complex new_obj2)
{
	Complex new_obj3;
//	cout<<a; this point meanys point 7
	new_obj3.a = new_obj1.a + new_obj2.a;
	new_obj3.b = new_obj1.b + new_obj2.b;
	return new_obj3;
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
	c1.display();
	c2.display();
	c3 = setDataBySum(c1,c2); //This will run beacsue we are returing an object of Complex Type.
//	c3.setDataBySum(c1,c2)l//This will not work, because its an outside funcntion from the Complex. It will not run by creating the object from Complex class
	c3.display();
}

/*
 * 1. Not in the Scope of the Class
 * 2. Friend function means, it allow to acccess the private memebers. which is declared inside it.
 * 3. Since it is not in the scope so it can't be called from thr object of the class.
 * 4. Can be invokde without the help of any object.
 * 5. Usually contains, the object as the arguments.
 * 6. Can be declared inside private or Public section of the program.
 * 7. It can't access the member directly by their name & need object+name.member_name to access any member.
 */




