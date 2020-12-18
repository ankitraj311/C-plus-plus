#include<iostream>
using namespace std;









class simple
{
  int data1, data2;
  public:
  //simple(int a, int b = 10) 11111 //if we didnt pss the value of b then it simple print the value of b as 10.
  simple(int a) //22222
  {
    data1 = a;
    //data2 = b;   /111
    data2 = 10; ///2222
  }
  void displayData();
};

void simple :: displayData()
{
  cout <<"OutPut is a "<<data1 <<" and b is "<<data2<<endl;
}

int main()
{
  //simple s(1,2);
  simple s(1);
  s.displayData();
}
