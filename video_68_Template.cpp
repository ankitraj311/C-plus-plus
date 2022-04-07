#include<iostream>
using namespace std;


template<class T>
class Ankit
{
	public:
		T data;
		Ankit(T a)
		{
			data=a;
		
		}
		void display();
		void func(T);

};

template <class T>
void Ankit<T>  :: display()
		{
			cout<<"Data is "<<data<<endl;
		}


void func(int a)
{
	cout<<"I am first function"<<endl;
}



template <class T>
void func(T a)
{
	cout<<"I am Templates first function"<<endl;
}


template <class T>
void func1(T a)
{
	cout<<"I am Templates first function1111"<<endl;
}
int main()
{
	
	Ankit<char> a('D');
	cout<<a.data;
	a.display();
	//func(4); //Exact match will takes the hightest Priority, thats why int function will get run not Template function
	func1(4); //Exact match will takes the hightest Priority
	return 0;
}	

