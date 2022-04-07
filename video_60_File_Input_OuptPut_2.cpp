#include<iostream>
#include<fstream>

/*
 * The useful class for working with files in C++ are :-
 * 1. fstreambase
 * 2. ifstream : derived from fstreambase
 * 3. ofstream : derived from fstreambase
 *
 * In order to work with file in C++, youu have to open it, primarly there are 2 ways to open
 *
 * 1. By Constructor
 * 2. Using the member function open() of the class
 */

using namespace std;

int main()
{

	string st2;
	
	ifstream in("sample_reading"); //ifstream is used to read data from the file
	//in>>st2; //in is the object name only you can replace it by any name
	//above code of line will reading only 1 line and befor space data
	//
	//
	//
	getline(in,st2); //Reading line1 
	//getline(in,st2);  // Reading line2
	cout<<st2;



	return 0;
}

