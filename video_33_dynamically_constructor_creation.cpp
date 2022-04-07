#include<iostream>
using namespace std;

/*
 * If there is Parametriz constructor then there should be non parametriz consatructor
 * */

class bankDeposite
{
	int principal, year;
	float  interest_rate;
	float  return_value;
	public:
		bankDeposite(){}; //No paramter constaructor
		bankDeposite(int p,int y,int r); // Paramatriz constructor 
		bankDeposite(int p,int y,float r); // Parametriz constructor
		void show();
};


bankDeposite :: bankDeposite(int p, int y, int R)
{
	principal=p;
	year=y;
	interest_rate = float(R)/100;
	return_value=principal;
	for(int i = 0; i<year; i++)
	{
		return_value=return_value*(1+ interest_rate);
	}

}


bankDeposite :: bankDeposite(int p, int y, float r)
{
	principal=p;
	year=y;
	interest_rate = r;
	return_value=principal;
	for(int i = 0; i<year; i++)
	{
		return_value=return_value*(1+ interest_rate);
	}

}

void bankDeposite :: show()
{
	cout<<"Principle amount was "<<principal
		<<"return value after "<<year
		<<" is "<<return_value;
}


int main()
{
	bankDeposite bd1,bd2, bd3;
	int p, y;
	float r;
	int R;

	cout<<"Enter the value of p , y and r float value";
	cin>>p>>y>>r;
	bd1 = bankDeposite(p,y,r);
	bd1.show();

	cout<<"Enter the value of p , y and r int value";
	cin>>p>>y>>R;
	bd2 = bankDeposite(p,y,R);
	bd2.show();



}


/*
 * If you are going to run Simple s1 with(0,0)
 * the you will gogin to get 0+0i
 * but if you only provide the (0) then 0 + 9i will get print.
 */
