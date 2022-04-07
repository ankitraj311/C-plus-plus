#include<iostream>
using namespace std;


/*
 * OOPs - Classes and Object
 * C++ --> Initally called --> C with classes by Stroustroup
 * Class --> Extension of Structure(in C)
 * Structure had Limitations
 *  --> members are public
 *  -->No methods
 *  Classess --> Structure + More
 *  Classess --> Can have Methods and Properties
 *  Classess -->  Can make few members as private and few as Public 
 *
 *  Structure in C++ are typedef
 *  you can declare object along with class declaration like this :
 *  class Employee
 *  {
 *  //Class defination
 *  }ankit;
 *  ankit.salary=8; make no sense if salary is private
 * 
 */


// Nesting of Member Function

class binary
{
	string s;
	public:
		void read(void);
		void chk_bin(void);
		void ones(void);
		void display(void);
};

void binary :: read()
{
	cout<<"Enter a binary number";
	cin>>s;
}

void binary :: chk_bin()
{
	int flag=-1;
	for(int i=0; i<s.length(); i++)
	{
	
		if(s[i] == '0' || s[i] == '1')
		{
			flag=0;
		}
		else
		{
			flag=1;
		}
		if(flag==1)
		{
			cout<<"Not Binary String";
			break;
		}	
	}
	if(flag==0)
		cout<<"Binary String";
}

void binary :: ones()
{

	for(int i=0; i<s.length(); i++)
	{
	
		if(s[i] == '0')
		{
			s[i]=1;
		}
		
		if(s[i] == '1')
		{
			s[i]=0;
		}
	}

}

void binary :: display()
{
	cout<<"String after ones is";
}


int main()
{
	binary b1;
	b1.read();
	b1.chk_bin();
	b1.display();

}


