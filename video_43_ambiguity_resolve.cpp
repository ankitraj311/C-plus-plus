#include<iostream>
#include<cmath>
using namespace std;

/*
 * 1. SimpleCalculator
 *     Take intput of 2 number using teo utility functuion
 * 2. ScientificCalculator
 *     take two input and perform any four operation
 * 3. Create another hybrideCalculator using inheritance of 2 class
 *  Questiomn 1:
 *     What type of inheritance you are using
 *     Question 2:
 *     	Which mode of ingeritance we are using
 *     	Question 3:
 *     		Create an object of hyprideCalaculator and  display  result of simple and scientific calculator.
 *     	Question 4:
 *     		How you are using code reuseablity
 */


class Calculator
{
	protected :
		int value1, value2;
	public:
		int setValue(int v1, int v2);
		int getValue();
};


int Calculator :: setValue(int v1, int v2)
{
	value1 = v1;
	value2 = v2;
}
int Calculator :: getValue()
{
	cout<<"Value we get "<<value1<<" and "<<value2<<endl;
}

class scientificCalculator
{
	protected :
		int value1;
		float value2;
	public:
		int setValue(int v1, float v2);
		int getValue();

};

int scientificCalculator:: setValue(int xDegrees, float v2)
{
	// converting degrees to radians
        value1 = xDegrees*3.14159/180;
	value2 = v2;
}
int scientificCalculator :: getValue()
{
	cout<<"Value we get "<<value1<<" and "<<value2<<endl;
}


class hybridCalculator : public Calculator, public scientificCalculator
{

	public:
		void setValue(int a, int b)
		{
			Calculator::setValue(a,b);
		}
		void getValue()
		{
			Calculator::getValue();
		}
		void show()
		{
			cout<<"Print from hybridCalculator"<<endl;
		}
};


int main()
{
	Calculator c1;
	c1.setValue(200,100);
	c1.getValue();

	scientificCalculator sc1;
	sc1.setValue(30,2);
	sc1.getValue();

	hybridCalculator hc;
	hc.setValue(10000,30000);
	hc.getValue();
	hc.show();

}

