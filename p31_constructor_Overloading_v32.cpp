//reference file p23_friend_function_v26.cpp my personal use
//ankitraj311@gmail.com
#include<iostream>
#include<cmath> //for using  pow and sqrt we needed cmath header file to be included
//#include<bits/stdc++.h>
using namespace std;






class Complex
{
  int x, y;
	public :
               Complex(int a, int b)
	       {
	         x = a;
                 y = b;
	       }

               Complex(int a)
	       {
	         x = a;
                 y = 0;
	       }
               Complex()
	       {
	         x = 0;
                 y = 0;
	       }
               void display_Data()
	       {
	         cout <<"x is "<<x <<" y is "<<y<<endl;
	       }
};


int main()
{
  //Whatever type of object you are making and defining it with implictlyConstructor. Then call will go to that particular type of constructor.
  Complex c1(10,20); //Two varibale Constructor call
  c1.display_Data(); 
  Complex c2(30); // Single varible constructor call 
  c2.display_Data(); 
  Complex c3; // Zero  variable constructor call
  c3.display_Data(); 
}
