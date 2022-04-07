#include<iostream>
using namespace std;

class Employee
{
	int id;
	int salary=122; 
	public:
		void setId();
		void getId();
};

void Employee :: setId()
{
	cout<<"Enter the id of Employee";
	cin>>id;
}

void Employee :: getId()
{
	cout<<"Emplyee id is "<<id<<" and salary is "<<salary<<endl;

}


int main()
{
	Employee e[4];
	for(int i=0; i<4; i++)
	//for(int i=0; i<sizeof(e)/sizeof(*e); i++)
	{
		e[i].setId();
		e[i].getId();
	}
}
