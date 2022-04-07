#include<iostream>
#include<cstring>
using namespace std;


class CWH
{
	protected:
		string title;
		float rating;
	public:
		CWH(string s, float r) //string we are using here
		{
			title = s;
			rating = r;
		}
		virtual void display()
		{
			cout<<"Bogus Code"<<endl;
		}
};

class CWHVideo : public CWH
{
	int videoLength;
	public:
		CWHVideo(string s,float r, int vl) : CWH(s,r)
		{
			videoLength=vl;

		}
		void display()
		{
			cout<<"This is an amazing video with title "<<title<<endl;
			cout<<"Rating : "<<rating<<" out of 5 is "<<endl;
			cout<<"Length of this video is : " <<videoLength<<" minutes"<<endl;
		}

};


class CWHText : public CWH
{
	int words;
	public:
		CWHText(string s, float r, int wc):CWH(s,r)
		{
			words=wc;
		}

//Coment this point number five.
		void display()
		{
			cout<<"This is an amazing Tutorial with title "<<title<<endl;
			cout<<"Rating of this text tutorial : "<<rating <<" out of 5 is "<<endl;
			cout<<"No of word in this text tutorial is : " <<words<<" words"<<endl;
		}
};


int main()
{
	string title;
	float rating, vlen;
	int words;

	//for code with Harry Video
	title = "Django Video";
	vlen = 4.56;
	rating = 4.89;
	CWHVideo djvideo(title, rating, vlen);
	//djvideo.display();


	//for code with Harry Tutorial
	title = "Django Tutorial";
	words = 4.06;
	rating = 4.09;
	CWHText djtutorial(title, rating, words);
	//djtutorial.display();


	CWH* tuts[2]; //Array of two pointer
	tuts[0] = &djvideo;
	tuts[1] = &djtutorial;

	tuts[0]->display();

	cout<<endl;
	cout<<endl;
	cout<<endl;
	tuts[1]->display();

	return 0;
}





/*
 * 3 Class we are having
 * 1. CWH
 * 2. CWHVideo
 * 3. CWHText
 *
 * CWH class we have inherted in all class. 
 *
 * we are creating pointer of CWH class, making displaY FUNCTION OF IT AS virtual and after that we are creating 2 pointer from class CWH to save the address of object created from the different 2 class.
 * 1 object by CWHVidep 2ed by CWHText.
 *
 *
 * Now if we are going to run the fucntion display then function will run, from the class whose object is created.
 *
 * but if we remove the virtual from the display function then we run the fucntion then all the fucntion from the ppointer class will get run.
 *
 *
 * 
 
 //Rules for Virtual Function
 //1.They can't be static
 //2. They are accessed by object pointer
 //3. Virtual fucntion can ba a friend of another class
 //4. A virtual fucntion in a base class might not be used
 //5. If A virtual fucntion is defined in a base class there is no necessity to redefine in the derived class
 


 */
