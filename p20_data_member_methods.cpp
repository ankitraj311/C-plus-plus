#include<iostream>
using namespace std;










class employee
{
  int id;
  static int count; //default value is ZEro. we have to declare it under the class & Out side the Class Also
  public:
	void setData(void)
	{
  	  cout <<"Enter the Employee id "<<endl;
  	  cin  >>id;
	  count++;
	}
	void getData(void)
	{
  	  cout <<"Employee id is "<<id <<" and this is employee no "<<count<<endl;
	}

	static void getCount(void) //Static Function used to access Static varibale of the class directly
	{
	  cout <<"Value of Count is "<<count<<endl;
	}
};
/*
void employee :: setdata(void)
{
  cout <<"Enter the Employee id "<<endl;
  cin  >>id;
}

void employee :: getdata(void)
{
  cout <<"Employee id is "<<id<<endl;
}
*/
int employee :: count;  //Declaring Static variable Class and outside Class also 
int main()
{
  employee ankit, shivam, rohit;

  ankit.setData();
  ankit.getData();
  employee::getCount();
  shivam.setData();
  shivam.getData();
  employee::getCount();
  rohit.setData();
  rohit.getData();
  employee::getCount();
  return 0;
}
