// Our Goal is Nesting of Member Function

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
	for(int i=0; i<s.length(); i++)
	{
	
		if(s.at(i) != '0' && s.at(i) != '1') //at function is string function, which we are using
		{
			cout<<"Not binary";
			exit(0);
		}
	}
}

void binary :: ones()
{
//	chk_bin();
	cout<<"Ones Complement";
	for(int i=0; i<s.length(); i++)
	{
	
		if(s.at(i) == '0') //at function is string function, which we are using
		{
			s.at(i)='1';
		}
		else
		{
			s.at(i)='0';
		}
	}
	cout<<endl;
}

void binary :: display()
{
	cout<<"Displaying ones String";
	for(int i=0; i<s.length(); i++)
	{
		cout<<s.at(i);
	}
}

int main()
{
	binary b1;
	b1.read();
	b1.chk_bin();
	b1.ones();
	b1.display();

}



//Nesting of Member function Started here//


/*

#include<iostream>
using namespace std;
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
	for(int i=0; i<s.length(); i++)
	{
	
		if(s.at(i) != '0' && s.at(i) != '1') //at function is string function, which we are using
		{
			cout<<"Not binary";
			exit(0);
		}
	}
}

void binary :: ones()
{
	chk_bin(); //Calling Check binary function from another function is called Nesting of Member fu
	// In this scenario we have declared our function in class as public, that why are able to use
	// it by .(dot)
	// But if we transfer our chk_bin member function from public to private then we are able to use our function from another member function only.
	// Will not able to use as b1.chk_bin();
	cout<<"Ones Complement";
	for(int i=0; i<s.length(); i++)
	{
	
		if(s.at(i) == '0') //at function is string function, which we are using
		{
			s.at(i)='1';
		}
		else
		{
			s.at(i)='0';
		}
	}
	cout<<endl;
}

void binary :: display()
{
	cout<<"Displaying ones String";
	for(int i=0; i<s.length(); i++)
	{
		cout<<s.at(i);
	}
}

int main()
{
	binary b1;
	b1.read();
//	b1.chk_bin();
	b1.ones();
	b1.display();

}
*/
