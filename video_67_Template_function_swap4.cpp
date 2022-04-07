#include<iostream>
using namespace std;

template<class T>
//float funcSwap(T &x, T &y) //1111
float funcSwap(T *x, T *y)   //2222
{
	//T temp; //1111
	//temp = x;  //1111
	//x = y;  //1111
	//y = temp; //1111



	T temp;
	temp = *x;
	*x = *y;
	*y = temp;
}


int main()
{
	//funcSwap(10,20);
	int x = 10, y = 20;
	//funcSwap(x,y); //1111
	cout<<" x is "<<x<<" y is "<<y<<endl;
	funcSwap(&x,&y); //22222
	cout<<" x is "<<x<<" y is "<<y<<endl;
	return 0;
}
