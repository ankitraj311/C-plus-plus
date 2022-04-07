#include<iostream>
using namespace std;
int count=0;
class num
{
	public:
		num()
		{
			count++;
			cout<<"This is the time when constructor is called for object "<<count<<endl;
		}


		~num()
		{
			count--;
			cout<<"This is the time when destructor is called for object "<<count<<endl;
		}

	};


int main()
{
	cout<<"we are inside our main function "<<endl;
	cout<<"Creating first object n1 "<<endl;
	num n1; // This object will get destroy by the destructor befor main get ENDS.

	{ //This is independent block, The object of this block will get destroy, After exiting the blk
		cout<<"Creating two more objects "<<endl;
		cout<<"Entering this block "<<endl;
		num n2,n3;
		cout<<"Existing this block "<<endl;
	}
	cout<<"back to Main "<<endl;
	return 0;
}




/*
 * Destructor never takes an arguemnt and didn't return any value also.
 * $ we are inside our main function
This is the time when constructor is called for object 1
Creating two more objects
Entering this block
This is the time when constructor is called for object 2
This is the time when constructor is called for object 3
Existing this block
This is the time when destructor is called for object 2
This is the time when destructor is called for object 1
back to Main
This is the time when destructor is called for object 0

 */
