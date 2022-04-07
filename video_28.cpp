#include<iostream>
using namespace std;

class Y;
class X
{
	int data;
	public:
		void setValue(int num)
		{
			data = num;
		}
	friend void add(X,Y);
};




class Y
{
	int data;
	public:
		void setValue(int num)
		{
			data = num;
		}
	friend void add(X,Y);
};

void add(X a, Y b)
{

	int Sum;
	Sum = a.data + b.data;
	cout<<"Sum of the values is " <<Sum;
}

int main()
{
	X a;
	Y b;
	a.setValue(5);
	b.setValue(10);
	add(a, b);
}


