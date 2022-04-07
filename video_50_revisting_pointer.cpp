#include<iostream>
using namespace std;

class test
{


};

int main()
{
	int a=100;
	int *ptr;
	ptr=&a;
	cout<<"Value at the pointer by simple Pointer is "<<*ptr<<endl;

	//New keyword/operator
	int *p=new int(1000);
	cout<<"Value of *p by new keyword is "<<*(p)<<endl;
	delete [] p;

	int *arr=new int[5]; //Dynamically allocation memory
	arr[0]=20;
	//arr[1]=40;
	*(arr + 1)=40; //both are same
	arr[2]=60;
	arr[3]=80;
	arr[4]=100;

	delete [] arr; //It will delete the dynamically allocated memory, After this you will get garbag result in print

	cout<<"Value of arr[0] by new keyword is "<<arr[0]<<endl;
	cout<<"Value of arr[1] by new keyword is "<<arr[1]<<endl;
	cout<<"Value of arr[2] by new keyword is "<<arr[2]<<endl;
	cout<<"Value of arr[3] by new keyword is "<<arr[3]<<endl;
	cout<<"Value of arr[4] by new keyword is "<<arr[4]<<endl;
	return 0;
}


/*
  int *ptr;
  ptr=&a;




  int *p=new int(1000);




  int *arr=new int[5];



  Complex *ptr = new Complex;

*/



