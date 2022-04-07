#include<iostream>
using namespace std;


class student
{
	protected:
		int roll_no;
	public:
		void set_roll_number(int);
		void get_roll_number(void);
};


void student :: set_roll_number(int r)
{

	roll_no = r;
}


void student :: get_roll_number()
{

	cout << "The roll number is "<<roll_no<<endl;
}


class exam : public student
{
	protected:
		float math;
		float physics;
	public:
		void set_marks(float, float);
		void get_marks();

};

void exam :: set_marks(float m1, float m2)
{
	math = m1;
	physics = m2;
}


void exam :: get_marks()
{
	cout<<"Math marks is"<<math<<endl; 
	cout<<"physics marks is"<<physics<<endl; 
}

class result : public exam
{
	private:
		float per;
	public:
		void display()
		{
			cout<<"The percentage is "<<(math+physics)/2<<"%"<<endl;
		}

};

int main()
{

	result ankit; //ankit object is from result class
	ankit.set_roll_number(14029); //by ankit object we are accesing set_roll_number from staudent class
	ankit.get_roll_number(); //by ankit object we are accesing get_roll_number from staudent class
	ankit.set_marks(90.9,90.9); //by ankit object we are acesing setMarks
	ankit.get_marks(); // by ankit object from result class we are accesing get marks from exam class
	ankit.display();//
	return 0;

}





/*
 * Notes
 * 1. If we are inheriting B from A and C from B {A --> B --> C}
 * 2. A is Base class of B and B is base class for C
 * 3. A --> B --> C is inheritance Path.
 */
