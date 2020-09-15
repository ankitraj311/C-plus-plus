#include<iostream>
using namespace std;









class Complex
{
  int a, b;
         public:
              void setData(int n1, int n2)
	      {
	        a = n1;
		b = n2;
	      }
	      void getData()
	      {
	        cout <<"OutPut is "<<a <<"+" <<b<<"i"<<endl;
	      }
	      //below line means that non-member - sumComplex function is allowed to do anything with my private data
	      friend Complex sumComplex(Complex o1, Complex o2);
};

Complex  sumComplex(Complex o1,  Complex o2)
{
  Complex o3;
  o3.setData((o1.a + o2.a),(o1.b + o2.b));
  return o3;
}
int main()
{
  Complex c1, c2, sum;
  c1.setData(1,2);
  c1.getData();
  c2.setData(3,4);
  c2.getData();
  // c1.sumComplex(c1,c2); this will not work
  sum = sumComplex(c1,c2);
  sum.getData();

}


//Properties of Friend Function
/*1. NOt in the scope of Class, it cannt be called from the object of the class.
 * 2. Since it is not the scope of class, it cant be called from the object of  that class. c1.sumComplex() === INvalid
 * 3.Can be invoke without th help of any object.
 * 4. Usually  contain the object as Argument.
 * 5.Can be declared inside pulic or Private section of class
 * 6. It cant access the member dirctly by their names and need object_name.member_name to access any member.
 * */
