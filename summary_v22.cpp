  //OPPs --Class & Objects
  //
  ////C++ -- initally called --> c with class
  ////Class -- Extension of structures
  //Structure have limitations
  //    -- Member are publuc
  //    --no Methods
  //Classes -->Structure & more
  //Classess -- can have Methods & property
  //Classes --> can make few mwmbers ae private & dew as Public
  //Structure in C++ are typedef
  //you can declare object along with the class declaration like this:
  /* class Employee{
   * Class defination
   * } harry ,ankit, mohit;*/
  //harry.salary makes no sense with Salary;
  //nesting of Members function
//we can make any function private or public. We can make Nested Functions inside of any function.
#include<iostream>
#include<string.h>
using namespace std;

class binary
{
  string s; //by default in class members are Private
  public :
       void read(void);
       void ones(void);
       void display(void);
       void chk_bin(void);
             
};
void binary :: read(void)
{
  cout <<"Enter a Binary number"<<endl;
  cin>>s;
}

void binary :: chk_bin(void)
{
  for(int i = 0; i < s.length(); i++)
  {
    if(s.at(i) != '0'  && s.at(i)  != '1')
    {
      cout <<"Incorrect binary formate"<<endl;
      exit (0);
    }
  }
}

void binary :: ones(void)
{
  //chk_bin(); //we can also run this function without s. becoz it will
  //automaticaly with the object binary is working
  for(int i = 0; i < s.length(); i++)
  {
    if(s.at(i) == '0')
    {
      s.at(i) = '1';
    }
    else
    {
      s.at(i) = '0';
    }
  }
}

void binary :: display(void)
{
  for(int i = 0; i < s.length(); i++)
  {
    cout <<s.at(i);
  }
  cout <<endl;
}
int main()
{
   binary b;
   b.read();
   b.chk_bin(); //Any of this function will run only when all are publi                 //if any one of then is private then it will run from
                 //Inside of any function not from main
   b.display();
   b.ones();
   b.display();
   exit(0);
 }


