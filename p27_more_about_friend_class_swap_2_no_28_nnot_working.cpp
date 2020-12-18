#include<iostream>
using namespace std;










class student2;
class student1
{
  int var1;
          public:
  		void setData(int n1)
		{
		  var1 = n1;
		}
  friend void getData(student1 o1, student2 o2);
  friend void swapData(student1 &o1, student2 &o2);

};


class student2
{
  int var2;
          public:
  		void setData(int n2)
		{
		  var2 = n2;
		}
  friend void getData(student1 o1, student2 o2);
  friend void swapData(student1 &o1, student2 &o2);
};


void getData(student1 o1, student2 o2)
{
  cout <<" value of o1_var1 is "<<o1.var1 <<" and o2_var2 is "<<o2.var2<<endl; 
}

//void swapData(student1 &x, student2 &y)
void swapData(student1 &o1, student2 &o2)
{
  int temp = o1.var1;
  o1.var1 = o2.var2;
  o2.var2 = temp;
  /*
  o1.var1 = o1.var1 + o2.var2;
  o2.var2 = o1.var1 - o2.var2;
  o1.var1 = o1.var1 - o2.var2;
  */
}
int main()
{
  student1 s1;
  student2 s2;
  s1.setData(30);
  s2.setData(40);
  cout <<"Befor Swap";
  getData(s1,s2);
  swapData(s1,s2);
  cout <<"after Swap";
  getData(s1,s2);
}
