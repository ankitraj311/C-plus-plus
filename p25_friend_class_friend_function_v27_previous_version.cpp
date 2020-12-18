#include<iostream>
using namespace std;








class Complex
{
  int a, b;
  friend int Calculator :: sumRealComplex(Complex c1, Complex c2); //error will come bcoz no idea about Calculator Class and sumRealComplex
  friend int Calculator :: sumCompComplex(Complex c1, Complex c2);
	public:
		void setData( int x1, int x2)
		{
                  a = x1;
		  b = x2;
		}
		void printfNumber()
		{
                  cout <<"Complex no.of Object is "<<a <<"+" <<b<<"i"<<endl;
 		}
};

class Calculator
{
	public:
		int add( int x1, int x2)
		{
		  return (x1+x2);
		}

                int Calculator :: sumRealComplex(Complex c1, Complex c2)
                {  
                  return (c1.a + c2.a);  //Real
                }

                int Calculator :: sumCompComplex(Complex c1, Complex c2)
                 {
                    return (c1.b + c2.b);  //Complex
                 }
};

int main()
{
  Complex c1, c2;
  c1.setData(10,40);
  c1.printfNumber();
  //c1.getData();
  c2.setData(20,60);
  c2.printfNumber();

  //c2.getData();
  Calculator calc;
  int res = calc.sumRealComplex(c1,c2);
  int resc = calc.sumCompComplex(c1,c2);
  cout <<"Value is "<<res<<endl;
  cout <<"Value is "<<resc;
}
