#include<iostream>
using namespace std;










inline int mul(int a, int b)
{
  //Not recommended to be use below line with Inline Funnctions
  //statics int  c = 0; //This execute only once
  // c = c +1;// Next time this function is run, the value of c will be retained
  int c  = a * b;
  return c;
}





float moneyReceived(int currentMoney, float factor = 1.4) //Default Arguments
{
  return currentMoney * factor;
}
/* Constant Arguments
int strlen(const char *p)
{

}
*/
int main()
{

  int a, b ,money = 100000;
  
//  cout <<"Enter value of a and b";
  //cin >>a >>b;
  cout <<"If you have "<<money<< "Then you will received "<<moneyReceived(money) <<" After 1 year for VIP"<<endl;
  cout <<"If you have "<<money<< "Then you will received "<<moneyReceived(money,1.1) <<" After 1 year for Normal";
  /*
  cout <<"Multiplication is "<<mul(a,b)<<endl;
  cout <<"Multiplication is "<<mul(a,b)<<endl;
  cout <<"Multiplication is "<<mul(a,b)<<endl;
  cout <<"Multiplication is "<<mul(a,b)<<endl;
  cout <<"Multiplication is "<<mul(a,b)<<endl;
  cout <<"Multiplication is "<<mul(a,b)<<endl;
  cout <<"Multiplication is "<<mul(a,b)<<endl;
  cout <<"Multiplication is "<<mul(a,b)<<endl;
  cout <<"Multiplication is "<<mul(a,b)<<endl;
  cout <<"Multiplication is "<<mul(a,b)<<endl;
  cout <<"Multiplication is "<<mul(a,b)<<endl;
  */
  return 0;
}
