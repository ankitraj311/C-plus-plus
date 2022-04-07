#include<iostream>
#include<cstring>
using namespace std;


class CWH
{
	protected:
		string title;
		float rating;
	public:
		CWH(string s, float r)
		{
			title = s;
			rating = r;
		}
		void display()
		{
                  cout<<"This is CWH, where title is "<<title<<endl;
                  cout<<"This is CWH, where rating is "<<rating<<endl;
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
	djvideo.display();


	//for code with Harry Tutorial
	title = "Django Tutorial";
	words = 4.06;
	rating = 4.09;
	CWHText djtutorial(title, rating, words);
	djtutorial.display();



	//for code with Harry Tutorial
	title = "Django Basic";
	words = 4.00;
	rating = 4.00;
	CWH dj(title, rating);
	dj.display();

}

