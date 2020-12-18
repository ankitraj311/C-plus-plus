#include<iostream>
using namespace std;
//Whenever we declare defination of Function || Constructor outside the class. We have to use Scope Resolution Operator for It. 
//And Prototype Inside the Class.





//In this program we are passing the values of Consructor at run time. By which we will able to decide which constructor will run at run time.
//by just simply providing the Input for Constructor.



class Bankdeposit //Class name is Bankdeposit
{
  int principle;
  int  years;
  float rate;
  float returnvalue;
    public:
         // Bankdeposit(){} //Constructor 1  which do Nothing. This is Required becoz firstly we are making objects. because of which Blank Constructor is Needed for us.
	  //Bankdeposit(int p, int y, float r); //r= .04 //Constructor 2 which takes the IntrestRate value as Float
	 // Bankdeposit(int p, int y, int r); //r= 4% //Constructor 3 Which takes the InterestRate value as INt
	  void fun_display(); //Function to Display Data
};
/*
Bankdeposit :: Bankdeposit(int p, int y, float r)  //Body of Constructor 2 which Scope Resolution Operator
{
  principle = p;
  years = y;
  rate = r;
  returnvalue = principle;

  for(int i = 0; i<y; i++)
  {
    cout <<"Float"<<endl;
    returnvalue = returnvalue * (1+rate); 
  }
}
Bankdeposit :: Bankdeposit(int p, int y, int r) // Body of Constructor 3 with scope resolution operator
{
  principle = p;
  years = y; 
  rate = float(r)/100;
  returnvalue = principle;

  for(int i = 0; i<y; i++)
  {
    returnvalue = returnvalue * (1+rate); 
  }
}
*/
void Bankdeposit :: fun_display() //Function to print value. This function prtotype is declare inside the class. and here we are using with scoperesolution operator. Soo Its have the knowledge about Class private members.
{
  //  cout <<"ReturnVlaue is "<<returnvalue <<" Years is "<<years <<" Principle Amount is "<<principle<<endl;
    cout <<"Hello";
}
int main()
{
  Bankdeposit bd1, bd2, bd3; //we are making Object first. then we are overRidding them.
  int p,y;
  float r;
  int R;
/*
  cout <<"Enter principle, year, rate";
  cin >>p>>y>>r;
  bd1 = Bankdeposit(p,y,r); //OverRidding Here by providing the values
  bd1.fun_display();


  cout <<"Enter principle, year, rate";
  cin >>p>>y>>R;
  bd1 = Bankdeposit(p,y,R);*/
  bd1.fun_display();
}
