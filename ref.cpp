#include<iostream>
using namespace std;
/*
void swap(int* a, int* b)
{
  int temp = *a; 
  *a = *b;



  *b = temp;
}
*/

/*
void swap_new(int &a, int &b)
{
  int temp = a; 
  a = b; 
  b = temp;
}*/


int& swap_new(int &a, int &b)
{
  int temp = a; 
  a = b; 
  b = temp;
  return a;
}
int main()
{
  int a = 10, b = 20;
  cout <<"value befor swap of a is "<<a <<" value of b is "<<b<<endl;
  //swap(&a,&b);
  //swap_new(a,b);
    swap_new(a,b) = 786;
  cout <<"value after swap of a is "<<a <<" value of b is "<<b<<endl;
}
