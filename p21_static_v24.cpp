#include<iostream>
using namespace std;










class Employee
{
  static int count;
  int id;
        public:
              void setData(void)
	      {
		  cout <<"Enter id"<<endl;
		  cin  >>id;
	      }
	      void getData(void)
	      {
		cout <<"Id is "<<id <<"Count is "<<count<<endl;
		count++;
	      }
};
int Employee :: count;
int main()
{
  Employee ankit, manish, shivam;
  ankit.setData();
  ankit.getData();


  shivam.setData();
  shivam.getData();


  manish.setData();
  manish.getData();
  return 0;
}
