#include<iostream>
#include<fstream>
using namespace std;

/*
 * The useful class for working with files in C++ are :-
 * 1. fstreambase
 * 2. ifstream : derived from fstreambase
 * 3. ofstream : derived from fstreambase
 * ----------------------------------------#include<fstream> you can add this to include above3 
 * In order to work with file in C++, youu have to open it, primarly there are 2 ways to open
 *
 * 1. By Constructor
 * 2. Using the member function open() of the class
 */


// ofstream & ifstream is the DataType


int main()
{
	string name;
	//connecting our file with hout stream
	
	ofstream hout("sample");

	//creating a name string and filling it with the string entered by user
	cout<<"Enter your name";
	cin>>name;

	hout<<"My name is " + name; //Writing this string to the file
	//getline(hout,name); // NOt working

	hout.close(); //Closing the file after completing the work

	ifstream hin("sample");
	string content;
	//hin>>content;

	getline(hin,content);
	cout<<"The content of the file is: "<<content;
	hin.close();

	return 0;
}
