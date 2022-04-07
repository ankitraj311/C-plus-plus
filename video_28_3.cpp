//watch video 7 Call by value call by reference
//
//float x = 455;
//cout<<x; 455 will get print
//float & y = x; // variable ekk hi hai, koi copy nahi bani ha
//It Means y also started point ot the refernce of x.
//So y started pointing to x;
#include<iostream>
using namespace std;

class C2;
class C1
{
	int data;
	public:
		void setValue(int num)
		{
			data = num;
		
		}


	friend void swap(C1 & , C2 &);
	friend void add(C1,C2);
	friend void display(C1,C2);
};




class C2
{
	int data;
	public:
		void setValue(int num)
		{
			data = num;
		}
	friend void swap(C1 &, C2 &);
	friend void add(C1,C2);
	friend void display(C1,C2);
};


void display(C1 a, C2 b)
{
	cout<<"C1 data value is "<<a.data<<endl;
	cout<<"C2 data value is "<<b.data<<endl;
}


void add(C1 a, C2 b)
{

	int Sum;
	Sum = a.data + b.data;
	cout<<"Sum of the values is " <<Sum<<endl;
}



void swap(C1 & a, C2 & b)
{
	int temp;
	temp = a.data;
	a.data = b.data;
	b.data = temp;
}

int main()
{
	C1 a;
	C2 b;
	a.setValue(5);
	b.setValue(10);
	display(a, b);
	add(a,b);
	swap(a,b);
	display(a, b);
}


