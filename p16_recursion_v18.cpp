#include<iostream>
using namespace std;










int fib(int n)
{
  if(n<2)
    return 1;
  return fib(n-2) + fib(n-1);
}

int fact(int a)
{
  if(a>0)
    return (fact(a-1) * a);
  else
    return 1;
}

int main()
{
  //cout <<fact(4);
    int a;
    cin >>a;
    cout <<fib(a);

}
