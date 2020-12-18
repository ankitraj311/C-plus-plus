#include<iostream>
using namespace std;








class Complex
{
  int a, b;
	public:
		void setData( int x1, int x2)
		{
                  a = x1;
		  b = x2;
		}
		void getData()
		{
                  cout <<"Complex no.of Object is "<<a <<"+" <<b<<"i"<<endl;
 		}
                friend Complex sumComplex(Complex c1, Complex c2);
};


Complex sumComplex(Complex c1, Complex c2)
{
  Complex c3;
  c3.setData((c1.a+c2.a), (c1.b+c2.b));
  return c3;
}


int main()
{
  Complex c1, c2, sum;
  c1.setData(10,40);
  c1.getData();
  c2.setData(20,60);
  c2.getData();
  sum = sumComplex(c1, c2);
  sum.getData();
}
