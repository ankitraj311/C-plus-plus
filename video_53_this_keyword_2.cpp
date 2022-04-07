#include<iostream>
using namespace std;


//Moto : how to return this 
class A
{
	int a;
	public:
		//void setData(int a)
		A& setData(int a) //return type A& matlab A ki object ka address, jis object se fucntion run ho raha hai
		{
			this->a=a;
			return *this; //* is used we are sending address of object
		}
		void getData()
		{
			cout<<"Value of a is "<<a<<endl;
		}
};

int main()
{
	//this is a keyword which is a pointer which point to the object which inkoves the member function.
	//Agar apko vo object return krni hai jiske liye apka fucntion (member fucntion) run ho raha hai to apko simply return krna hai this keyword.
	//this is also a pointer.
	A a;
	//a.setData(100);
	a.setData(100).getData(); //We are using in this way because a,setData(100) will return A& type value, then we are running getData by return object.
	//a.getData();

}


