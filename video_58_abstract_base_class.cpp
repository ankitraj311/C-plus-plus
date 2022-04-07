/*
 * 1. What is abstract base class i
 * Ans: It a class which having at list one Pure virtual class
 * and In the previous video 57 CWH class is a class which we know that we are going to dervied it for other class. We already know that time that we will going to overide it in the future.i
 *
 * Abstract base class is a class which have at least 1 pure virtual fucntion
 * That type of class we known as abstract base class
 * 2. What is Pure Virtual function
 */




//we are not making display function of any class then display function from the base class will going to run. But If we wan that every one SHOULD create the display fucntion then it is known as pure virtual fucntion.
#include<iostream>
using namespace std;


/*
 * Abstract base class and virtual base fucntion are relatedt to each other.
 *
 * Abstract base class is class which is desgin to override ans you are not going to create any object with it
 */


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
                virtual void display()=0; //This is know as pure virtual fucntion. Mujse aage ja kr override kr dena
/*		virtual void display()
		{
			cout<<"Bogus"<<endl;
		} */
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




        CWH* tuts[1]; //Array of two pointer
        tuts[0] = &djvideo;
        tuts[0]->display();
}
