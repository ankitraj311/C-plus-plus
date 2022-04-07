#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{

	//Their are two way to open file.
	//1. By constructor, which we already seen
	//2. By Member fucntion of ofstream 





//////////////////-----------------11111111-------------------////////
	string st1 = "ANKIT RAJ";
        //opening file using constructor and writing it
        ofstream out1("sample1"); //you cant name out object by  any name, its just name of object
        //ofstream is used to write the file
        out1<<st1;



//////////////////////--------------22222222-------------/////////////////
	ofstream out; //ofstream is a stream, whose object we construct
	out.open("sample"); //open is the member function of ofstream "sample" is the file name
	out<<"This is Meeeee\n";
	out<<"This is Meeeee";
	out.close(); //Always close the file



	ifstream in; //ifstream ka object bnaya
	string st,st2; //Ek string bnaiyee 
	in.open("sample"); //file ko open kiya read krne k liye
//	in>>st; //By this only one letter of first line will get print
//	in>>st>>st2; //By this only two letter from first line without space in it.
//	getline(in,st); //By this whole line will get print
//	cout<<st<<st2; //string ko consol pr print kar vaya

	while( in.eof() == 0 )
	{
		getline(in,st); //comes from string header file
		cout<<st<<endl;
	}


	in.close();
	return 0;
}
