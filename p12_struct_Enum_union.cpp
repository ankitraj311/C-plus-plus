#include<iostream>
using namespace std;

	
	
	
	
	
/*	111111111111111111 &22222222222222222
typedef struct employee 
{
  int eid;
  char favchar;
  float salary;
}ep;
*/

union money  ///3333333333333
{
  int rice; //4
  char car; //1
  float pounds; //4
};

int main()
{

  /* 111111111111
  struct employee ankit, shivam;
  ankit.eid = 1;
  ankit.favchar = 'c';
  ankit.salary = 120000000;

  cout <<"value is "<<ankit.eid<<endl;
  cout <<"value is "<<ankit.favchar<<endl;
  cout <<"value is "<<ankit.salary<<endl;
 
  shivam.eid = 2;
  shivam.favchar = 's';
  shivam.salary = 100000000;

  cout <<"value is "<<shivam.eid<<endl;
  cout <<"value is "<<shivam.favchar<<endl;
  cout <<"value is "<<shivam.salary<<endl; 
  */


  /* 222222222222222
  ep ankit, shivam; ///Type Deffff
  ankit.eid = 1;
  ankit.favchar = 'c';
  ankit.salary = 120000000;

  cout <<"value is "<<ankit.eid<<endl;
  cout <<"value is "<<ankit.favchar<<endl;
  cout <<"value is "<<ankit.salary<<endl;
 
  shivam.eid = 2;
  shivam.favchar = 's';
  shivam.salary = 100000000;

  cout <<"value is "<<shivam.eid<<endl;
  cout <<"value is "<<shivam.favchar<<endl;
  cout <<"value is "<<shivam.salary<<endl; 
  */
	/*
  union money m1;   ////3333333333333

  m1.rice = 34;
  m1.car = 'c';
  cout <<m1.rice<<endl;
  cout <<m1.car<<endl;
*/
  enum Meal{breakfast, lunch, dinner};
  Meal m1 = breakfast;
  cout <<m1<<endl;
  cout <<breakfast<<endl;
  cout <<lunch<<endl;
  cout <<dinner<<endl;
}
