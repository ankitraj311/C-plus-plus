#include<iostream>
using namespace std;

/*
 * initilization list is nothing but a way to provide the value to the variables
 Syntax for initilization list in Comstructor:
 Constructor (arguments-list) : initilization-section //used when the constructor body is very complex
  {
 	assignment + other code;
   }
*/


class Test
{
 	int a;
 	int b;
	//int b;  //9
	//int a;  //9

	public: 

	//Test(int i,int j):a(i),b(j) //1
	//Test(int i,int j):a(j),b(i) //2
	//Test(int i,int j):a(i),b(i+j) //3
	//Test(int i,int j):a(i),b(i*j) //4
	//Test(int i,int j):a(i),b(a*j) //5
	//Test(int i,int j):a(i),b(2*j) //6
	//Test(int i,int j):a(i),b(b*j) //7 //Garbag will come
	//Test(int i,int j):b(j),a(i) //8
	//Test(int i,int j):b(j),a(i+b) //9 Garbag result will come, this will get handle by 9 group
	//Test(int i,int j) //10
	Test(int i,int j):a(i) //11
	{
		//a=i; //10
		//b=j; //10
		//b=j; //11
		cout<<"Value of a is "<<a<<endl;
		cout<<"Value of b is "<<b<<endl;
	}
};


int main()
{
	Test t1(10,20);
}
