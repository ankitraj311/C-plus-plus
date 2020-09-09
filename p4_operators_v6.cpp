#include<iostream>
#include"ankit.h"
using namespace std;
// Thier two type of header file
// 1. System Header files.
// 2. User-Define header file. like #include"ankit.h"
int main()
{
  int a = 4, b = 5;
  cout <<"Operaters in C++, value of a is "<<a <<"value of b is "<<b<<endl;
  // Arithmetics Operators
  cout <<"The value of a+b is "<<a+b<<endl; 
  cout <<"The value of a-b is "<<a-b<<endl;  
  cout <<"The value of a*b is "<<a*b<<endl;  
  cout <<"The value of a/b is "<<a/b<<endl;  
  cout <<"The value of a%b is "<<a%b<<endl;  
  cout <<"The value of a++ is "<<a++<<endl;  
  cout <<"The value of a-- is "<<a--<<endl;  
  cout <<"The value of ++a is "<<++a<<endl;  
  cout <<"The value of --a is "<<--a<<endl; 
 //Assigment Operators :- Used to assign value to the Variables
 //int  a = 3, b = 4;
 //char d = 'd';
 cout<<"\n";
 //Comparison operators
 // like :- (a==b), (a!=b), (a<b), (a>b), (a<=b), (a>=b)
    cout <<"The value of a==b is "<<(a==b)<<endl; 
    cout <<"The value of a!=b is "<<(a!=b)<<endl; 
    cout <<"The value of a<b is "<<(a<b)<<endl; 
    cout <<"The value of a>b is "<<(a>b)<<endl; 
    cout <<"The value of a<=b is "<<(a<=b)<<endl; 
    cout <<"The value of a>=b is "<<(a>=b)<<endl; 
 
  
 
 //Logical Operators
 // ((a!=b) && (a<b)), ((a==b) || (a<b))
 //If a==b the result will be 0. For true.
  cout<<"\n";
  cout <<"The value of (a<b)&&(a!=b)) is "<<((a<b)&&(a!=b))<<endl; 
  return 0;
}
