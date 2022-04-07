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
	string st = "ANKIT RAJ";
	string st2;

	//opening file using constructor and writing it
	ofstream out("sample"); //you cant name out object by  any name, its just name of object
	//ofstream is used to write the file
	out<<st;


	return 0;
}

