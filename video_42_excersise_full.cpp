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
 *     		
 *
 *     		AGar ambeguious function ki wajaha se issue ho raha hai to.
 *     		or app uss ambigous function ko dobara se bna dete ho to
 *     		base class ka vo ambigous fucntion overwritte ho jata hai
 */


class Calculator
{
	protected :
		int value1, value2;
	public:
		int setValue1(int v1, int v2);
		int getValue1();
		int add();
		int subtract();
		int divide();
		int multiple();
};


int Calculator :: setValue1(int v1, int v2)
{
	value1 = v1;
	value2 = v2;
}
int Calculator :: add()
{
	cout<<"Sum result is "<<(value1 + value2)<<endl;
}
int Calculator :: subtract()
{
	cout<<"Subtract result is "<<(value1 - value2)<<endl;
}
int Calculator :: divide()
{
	cout<<"Divide result is "<<(value1 / value2)<<endl;
}

int Calculator :: multiple()
{
	cout<<"Multiple result is "<<(value1 * value2)<<endl;
}
int Calculator :: getValue1()
{
	cout<<"Value we get "<<value1<<" and "<<value2<<endl;
	add();
	subtract();
	divide();
	multiple();
}

class scientificCalculator
{
	protected :
		int value1;
		float value2;
	public:
		int setValue2(int v1, float v2);
		int getValue2();
		int sinFun();
		int cosFun();
		int tanFun();
		int logFun();

};
int scientificCalculator:: setValue2(int xDegrees, float v2)
{
	// converting degrees to radians
        value1 = xDegrees*3.14159/180;
	value2 = v2;
}
int scientificCalculator :: sinFun()
{
	cout<<"SinFun "<<value1<< " result is "<<sin(value1)<<endl;
}
int scientificCalculator :: cosFun()
{
	cout<<"CosFun "<<value1<< " result is "<<cos(value1)<<endl;
}
int scientificCalculator :: tanFun()
{
	cout<<"TanFun "<<value1<< " result is "<<tan(value1)<<endl;
}

int scientificCalculator :: logFun()
{
	cout<<"LogFun "<<value1<< " result is "<<log(value2)<<endl;
}
int scientificCalculator :: getValue2()
{
	cout<<"Value we get "<<value1<<" and "<<value2<<endl;
	sinFun();
	cosFun();
	tanFun();
	logFun();
}


class hybridCalculator : public Calculator, public scientificCalculator
{
	protected: 

	public:
		void show()
		{
			cout<<"Print from hybridCalculator"<<endl;
		}
};


int main()
{
/*	Calculator c1;
	c1.setValue1(200,100);
	c1.getValue1();
	c1.add();
	c1.subtract();
	c1.divide();
	c1.multiple();


	scientificCalculator sc1;
	sc1.setValue2(30,2);
	sc1.getValue2();
	sc1.sinFun();
	sc1.cosFun();
	sc1.tanFun();
	sc1.logFun();

*/
	hybridCalculator hc;
	hc.setValue1(200,100);
	hc.setValue2(30,2);
	hc.getValue1();
	hc.getValue2();
	hc.show();

}

