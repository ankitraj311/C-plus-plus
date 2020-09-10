#include<iostream>
using namespace std;
int main()
{





  int a = 3;
  int* b = &a;
  cout <<"Address of A is "<<&a<<endl;
  cout <<"Address of A is "<<b<<endl;

  //value
  cout <<"Address of A is "<<*b<<endl;

  int** c = &b;
  cout <<"The Address of b is "<<&b<<endl;
  cout <<"The Address of b is "<<c<<endl;
  cout <<"The Value of c is "<<*c<<endl;
  cout <<"The Value at the Address value_at(value_at(c)) is "<<**c<<endl;
  return 0;
}
