#include<iostream>
using namespace std;


//template<class T1=int, class T2=float, class T3=char> //You can pass any number of parameters here
template<class T1=char, class T2=char, class T3=char> //You can pass any number of parameters here
class Ankit //class name
{
	public:
		T1 a; //T1, T2, T3 is the data type, which will get know during running function
		T2 b;
		T3 c;
		Ankit(T1 x, T2 y, T3 z) //Constructor, which filling the values
		{
			a = x;
			b = y;
			c = z;
		}

		void display() //Calling Function
		{
			cout<<"The Value of a is "<<a<<endl;
			cout<<"The Value of b is "<<b<<endl;
			cout<<"The Value of c is "<<c<<endl;
		}
};

int main()
{

	//Ankit<> a1(10, 10.23, 'D'); //<> these symbol should be there, because we are using template
	Ankit<> a1('z', 'J', 'D'); //<> these symbol should be there, because we are using template
	a1.display(); //calling Fucntion
	return 0;

}
