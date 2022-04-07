#include<iostream>
using namespace std;


class student //student is virtual base class
{
	protected:
		int roll_no;
	public:
		void set_number(int a)
		{
			roll_no = a;
		}
		void print_number(void)
		{
			cout<<"Your roll no is "<<roll_no<<endl;
		}

};

class test : virtual public student //or public virtual student 
{
	protected:
		float math, physics;
	public:
		void set_marks(float a, float b)
		{
			math = a;
			physics = b;
		}
		void print_marks()
		{
			cout<<"Math marks are "<<math<<" physics marks are "<<physics<<endl;
		}

};

class sports :  public virtual student
{
	protected:
		float score;
	public:
		void set_score(float sc)
		{
			score = sc;
		}
		void print_score()
		{
			cout<<"Score is "<<score<<endl;
		}



};

class result : public test, public sports
{
 	private :
		float total;
	public:
		void display(void)
		{
			total = math + physics + score;
		}
		void print_display()
		{
			cout<<"Total value is "<<total<<endl;
		}
};


int main()
{
	result r1;
	r1.set_number(14029);
	r1.print_number();

	r1.set_marks(90.1, 85.5);
	r1.print_marks();

	r1.set_score(155.5);
	r1.print_score();

	r1.display();
	r1.print_display();
}


