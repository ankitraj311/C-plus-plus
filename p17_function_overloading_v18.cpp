#include<iostream>
using namespace std;









/*
int add(int a, int b)  //2222222222222222
{
  return a+b;
}
*/

int add(float a, int b)  //we are calling with int but taking input with float but it will handlle it 11111111111
{
  return a+b;
}
int add(int a, int b, int c)
{
  return a+b+c;
}

float volume(double r, int h)
{
  return (3.14 * r * r *h);
}

float volume(int a)
{
  return (a * a * a);
}
int main()
{
  cout <<"Answer of 3,6 is   "<<add(3,6)<<endl; //111111111   222222222222222222
  cout <<"Answer of 3,6,3 is "<<add(3,6,3)<<endl;
  cout <<"Volume of Cylinder is "<<volume(2,5)<<endl;
  cout <<"Volume of Cube is "<<volume(2)<<endl;
}

