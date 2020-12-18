#include<iostream>
using namespace std;






class Y;
class X
{
  int data;
	public:
  		void setData(int value)
		{
		  data = value;
		}
               friend void add(X c1, Y c2);
};



class Y
{
  int data;
	public:
  		void setData(int value)
		{
		  data = value;
		}
                friend void add(X c1, Y c2);
};

void add(X c1, Y c2)
{
  cout <<"Sum is "<<c1.data+c2.data<<endl;
}


int main()
{
  X c1;
  c1.setData(5);
  Y c2;
  c2.setData(5);
  add(c1, c2);
}
