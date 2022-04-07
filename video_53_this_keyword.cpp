#include<iostream>
using namespace std;


//class k function knows as member function
class A
{
	int a;
	public:
		void setData(int a)
		{
			this->a=a;
		}
		void getData()
		{
			cout<<"Value of a is "<<a<<endl;
		}
};

int main()
{
	//this is a keyword which is a pointer which point to the object which inkoves the member function.
//Agar apko vo object return krni hai jiske liye apka fucntion (member fucntion) run ho raha hai to apko simply return krna hai this keyword.
//this is also a pointer.
	A a;
	a.setData(100);
	a.getData();

}


