#include<iostream>
using namespace std;


//Class template with Multiple Parameters
/*
 * template< class T1, class T2 , , , , , , (comma Seprated class)>
 * template< class T1, class T2>
 * class nameofClass
 * body
 */

template<class T1, class T2>
class vector
{
	public:
		T1 data1;
		T2 data2;
		
		vector(T1 a, T2 b)
		{
			data1=a;
			data2=b;
		}

		void display()
		{
			cout<<"Value of data1 is "<<this->data1<<endl;
			cout<<"Value of data2 is "<<this->data2<<endl;
		}
};


int main()
{
	//vector<int, char> v1(10, 'C');
	//vector<float, float> v1(10.04, 20.02);
	vector<int, int> v1(10.04, 20.02);
	v1.display();
}


