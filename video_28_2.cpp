//With int and get return result

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
	friend int add(X,Y);
};




class Y
{
	int data;
	public:
		void setValue(int num)
		{
			data = num;
		}
	friend int add(X,Y);
};

int add(X a, Y b)
{

	int Sum;
	Sum = a.data + b.data;
	cout<<"Sum of the values is " <<Sum;
	return Sum;
}

int main()
{
	X a;
	Y b;
	a.setValue(5);
	b.setValue(10);
	int ret = add(a, b);
	cout<<" ret is "<< ret;
}


