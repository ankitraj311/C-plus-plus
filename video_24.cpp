//Static Member in Member Function
//Static varibale also known as class Variable. Life time till the program get terminated
//Static Function is used to access all the static variable in a class
/*
#include<iostream>
using namespace std;

class Employee
{
	int id;
	static int count;
	public:
		void setData(void)
		{
			cout<<"Enter the id";
			cin>>id;
			count++;
		}
		void getData(void)
		{
			cout<<"Id is "<<id<<" count is "<<count<<endl;
		}
};
int Employee :: count;
//int Employee :: count=1000; // also permitted
//Static varibale to declare outside the class,
//because it will going to allocate memory for count only once, 
//not every time with object declaration.

int main()
{
	Employee ankit, shivam, manish;

	ankit.setData();
	ankit.getData();


	shivam.setData();
	shivam.getData();

	manish.setData();
	manish.getData();
}

*/

//Static Function

#include<iostream>
using namespace std;

class Employee
{
	int id;
	static int count;
	public:
		void setData(void)
		{
			cout<<"Enter the id";
			cin>>id;
			count++;
		}
		void getData(void)
		{
			cout<<"Id is "<<id<<" count is "<<count<<endl;
		}
		static void getCount(void)
		{
			cout<<"The value of count is "<<count<<endl;
		}
};
int Employee :: count;
//int Employee :: count=1000; // also permitted
/*Static varibale to declare outside the class, because it will going to allocate memory for count only once, not every time with object declaration.*/

int main()
{
	Employee ankit, shivam, manish;

	ankit.setData();
	ankit.getData();
	Employee::getCount(); //getCount is getting increased class Run.


	shivam.setData();
	shivam.getData();
	Employee::getCount();

	manish.setData();
	manish.getData();
	Employee::getCount();
}
