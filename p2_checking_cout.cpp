#include<iostream>
using namespace std;
int glo = 100;
void sum()
{
  cout<< "Hello World";
}
int main()
{
  int a = 4, b =5;
  float pi = 3.14;
  char c = 'd';
  bool is_true = true;





  cout <<"Value of  int is "<<a  <<".\n";
  cout <<"Value of  float is "<<pi  <<".\n";
  cout <<"Value of  char is "<<c  <<".\n";
  cout <<glo<<"\n";
  cout <<is_true<<"\n";
  sum();
  return 0;
}
