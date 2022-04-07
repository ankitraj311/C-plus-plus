#include<iostream>
using namespace std;


//Base class
class Employee
{
	int s_no=100; //This can't be inherited by programmer class
	public:
	float salary; //This salary will get inherit
	int id;       //This id will get inherit
		Employee(int inpId) //This is Constructor
		{
			id=inpId; //This id value will get fixed by Constructor
			salary = 34;
		}
		Employee() //This is needed because during inheriting class base constructor is needed.
		{}
};

//class <<derived-class_name>> : <<visiblity-mode>> <<base-class-name>>
//VivsiblityMode = Your Base class Public Member, In what way going to inherit to the Derived Class.
//Default visiblity mode is private
//Private visiblity mode will make public member of base class to Private member to derived class
//You can't Inherit Private member of a Class to Another Derived class
class programmer : public Employee //Here it will call dafault constructor of Employee
{
	public:
		int languagecode;
		programmer(int inpId)
		{
			id=inpId; //Id get inherieted but value we have to fill
			salary=100; //Salary get inherited by value we have to fill
			languagecode=9;
			}

			//after inherit
			//salary and id are here.
	int getData()
	{
		cout<<"getData Function get called but their is no need to call because these varibales are inheried as Public so they can be acces by ."<<endl;
		cout<<"Value of id is  "<<id<<endl;
		cout<<"Value of salary is  "<<salary<<endl;
		cout<<"Value of language code is  "<<languagecode<<endl;
	}

};




int main()
{
	Employee harry(1), rohan(2);
	cout<<"Salary is "<<harry.salary<<endl;
	cout<<"Id is "<<harry.id<<endl;
	cout<<"Salary is "<<rohan.salary<<endl;
	cout<<"Id is "<<rohan.id<<endl;
	programmer p1(10);
	//cout<<"Value of s_no is "<<p1.s_no<<endl;  This can't be Inherit because its private
	cout<<"Value of id is "<<p1.id<<endl; 
	cout<<"Value of salary is "<<p1.salary<<endl;
	cout<<"Value of languagecode is "<<p1.languagecode<<endl;
	p1.getData();
	return 0;


}
