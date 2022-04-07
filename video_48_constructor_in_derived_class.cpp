#include<iostream>
using namespace std;
class Base1{
    int data1;
    public:
	Base1(int i){
	    data1 = i;
	    cout<<"Base1 class constructor called"<<endl;
	}
	void printDataBase1(void){
	   cout<<"The Value od data1 is "<<data1<<endl;
        }
};

class Base2{
    int data2;

    public:
	Base2(int i){
	    data2 = i;
	    cout << "Base class constructor called" << endl;
	}
	void printDataBase2(void){
	    cout << "The Value od data1 is " << data2 << endl;
	}
};

class Derived: public Base2, public Base1{
    int derived1, derived2;
    public:
	Derived(int a, int b, int c, int d) : Base2(b) , Base1(a)
	{
	    derived1 = c;
	    derived2 = d;
	    cout<< "Derived class Called"<<endl;
	}
	void printDataDerived(void)
	{
	     cout << "The value of derived1 is " << derived1 << endl;
	     cout << "The value of derived2 is " << derived2 << endl;
	}
};
int main(){
    Derived ankit(1, 2, 3, 4);
    ankit.printDataBase1();
    ankit.printDataBase2();
    ankit.printDataDerived();
    return 0;
}








/*
 *
 *
 * Error because of this  Derived(int a, int b, int c, int d) : Base2(b) : Base1(a)


$ g++ video_48_constructor_in_derived_class.cpp
video_48_constructor_in_derived_class.cpp: In constructor 'Derived::Derived(int, int, int, int)':
video_48_constructor_in_derived_class.cpp:31:47: error: no matching function for call to 'Base1::Base1()'
  Derived(int a, int b, int c, int d) : Base2(b) : Base1(a)
                                               ^
video_48_constructor_in_derived_class.cpp:6:2: note: candidate: Base1::Base1(int)
  Base1(int i){
  ^~~~~
video_48_constructor_in_derived_class.cpp:6:2: note:   candidate expects 1 argument, 0 provided
video_48_constructor_in_derived_class.cpp:3:7: note: candidate: constexpr Base1::Base1(const Base1&)
 class Base1{
       ^~~~~
video_48_constructor_in_derived_class.cpp:3:7: note:   candidate expects 1 argument, 0 provided
video_48_constructor_in_derived_class.cpp:3:7: note: candidate: constexpr Base1::Base1(Base1&&)
video_48_constructor_in_derived_class.cpp:3:7: note:   candidate expects 1 argument, 0 provided
video_48_constructor_in_derived_class.cpp:31:49: error: expected '{' before ':' token
  Derived(int a, int b, int c, int d) : Base2(b) : Base1(a)
                                                 ^
video_48_constructor_in_derived_class.cpp: In function 'int main()':
video_48_constructor_in_derived_class.cpp:46:11: error: 'class Derived' has no member named 'printdataBase2'; did you mean 'printDataBase2'?
     ankit.printdataBase2();
*/
