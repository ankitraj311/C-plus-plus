#include<iostream>
using namespace std;

class Simple
{
	int x,y;
	public:
		Simple(int a, int b = 9)
		{
			x = a;
			y = b;
		}
		void printData()
		{	
			cout<<"Value of x is "<<x<<" and Value of y is "<<y<<endl;
		}
};

int main()
{
	Simple s1(0,0);
	s1.printData();

}


/*
 * If you are going to run Simple s1 with(0,0)
 * the you will gogin to get 0+0i
 * but if you only provide the (0) then 0 + 9i will get print.
 */
