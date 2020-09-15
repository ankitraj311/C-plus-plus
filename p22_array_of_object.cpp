#include<iostream>
using namespace std;










class Employee
{
  static int count;
  int id, salary;
  public:
        void setData(void)
	{
	  salary = 122;
	  cout <<"Enter Id of Employee"<<endl;
	  cin  >>id;
	}
	void getData(void)
	{
	  cout <<"Salary is "<<salary <<" Id is "<<id <<"Count is "<<count+1<<endl;
	  count++;
	}
	

};
int Employee :: count;
int main()
{
  Employee ankit, shivam, manish, Emp[4];
  int i; 
 /* ankit.setData();
  ankit.getData();


  shivam.setData();
  shivam.getData();


  manish.setData();
  manish.getData();
  */
  for(i=0; i<4; i++)
  {
    Emp[i].setData();
    Emp[i].getData();
  }
  return 0;
}
