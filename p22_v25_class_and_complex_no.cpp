#include<iostream>
using namespace std;










class Complex
{
  int a,b;
	public:
              void setData(int a1, int b1)
	      {
	        a = a1;
		b = b1;
	      }
	      void Display()
	      {
                cout <<"Complex value is "<<a <<"+" <<b <<"i"<<endl;
	      }
	      void setDataBySum(Complex o1, Complex o2)
	      {
                a = o1.a + o2.a;
                b = o1.b + o2.b;
	      }

};
int main()
{
  Complex c1, c2, c3;
  c1.setData(1,2);
  c1.Display();
  c2.setData(3,4);
  c2.Display();
  c3.setDataBySum(c1,c2);
  c3.Display();

}
