#include<iostream>
using namespace std;






int sum(int, int); //Prototype
int main()
{
  int num1 = 0, num2 = 0, s = 0;
  cout <<"Enter value of num1 and num2";
  cin  >>num1 >>num2;
  s =   sum(num1, num2);
  cout <<"Sum is "<<s;
 // cout <<"Sum is "<<sum(num1, num2); Tnis is Also Possible function call during cout

}

int sum(int a, int b)
{
  int c = a + b;
  return c;
}
