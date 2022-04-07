#include<iostream>
using namespace std;

template<class T1, class T2>
float funcSwap(T1 x, T2 y)
{
	cout<<"Befor swap value of x is "<<x<<" and y is "<<y<<endl;
	T1 temp;
	temp = x;
	x = y;
	y = temp;
	cout<<"After swap value of x is "<<x<<" and y is "<<y<<endl;
}


int main()
{
	//funcSwap(10,20);
	funcSwap(10.01,20.33);
	return 0;
}
