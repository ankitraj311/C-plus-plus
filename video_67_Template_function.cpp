#include<iostream>
using namespace std;

class vector
{


};



float funcAverage(int a, int b)
{
	float avg = (a+b)/2.0;
	return avg;
}


float funcAverage2(int a, float b)
{
	float avg = (a+b)/2.0;
	return avg;
}

int main()
{
	float a;
	a = funcAverage2(10.9, 7.5);
	cout<<"Average value is "<<a<<endl;
	return 0;
}
