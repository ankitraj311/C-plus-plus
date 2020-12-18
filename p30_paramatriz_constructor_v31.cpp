//reference file p23_friend_function_v26.cpp my personal use
//ankitraj311@gmail.com
#include<iostream>
#include<cmath> //for using  pow and sqrt we needed cmath header file to be included
//#include<bits/stdc++.h>
using namespace std;








class Point
{
  int x, y;
	public:
                Point(int,int);
                void displayPoint(void)
                {
		  cout <<"("<<x <<", "<<y <<")"<<endl;
                }
                friend void point_Distance(Point a,Point b);

};

Point :: Point(int a, int b) //Parametrize Constructor Creating
{
  x = a;
  y = b;
}

void point_Distance(Point p1, Point p2) //Our function to calculate the distance between two point.
{
  long double diff, distance_between; //long double because return type of sqrt is long double
  distance_between = sqrt( pow((p2.y - p1.y),2) + pow((p2.x - p1.x),2) ); // using power function to square root pow(base,power)
  cout <<"Distance between two point is "<<distance_between; //Printing result which we get in distance_between variable
}
int main()
{
  Point a(10,20),b(30,40);
 // Point c; //Implicit declaration of Constructor
  //Complex a = Complex(10,20);  This is Explict Declaration of Constructor
  a.displayPoint();  
  b.displayPoint();  
  point_Distance(a,b); //calling function by passing the object, with paramatrize constructor
  //object.point_Distance(); will be used when we want to print our result by another function. In that case will will make our function with
  //object return type instead of " void Point point_Distance()"
}
