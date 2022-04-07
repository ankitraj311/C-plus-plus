#include<iostream>
#include<cmath>
using namespace std;


class Point
{
	int x,y;
	public:
	        Point(int a, int b)
		{
			x = a;
			y = b;
		}
		void display()
		{
			cout<<"x is "<<x<<" y is "<<y<<endl;
		}
		
		float pointD(Point p1, Point p2)
		{
			int new_x= (p2.x - p1.x) *  (p2.x - p1.x);
			int new_y= (p2.y - p1.y) *  (p2.y - p1.y);
			return sqrt(new_x+new_y);
		}

};


int main()
{
	Point p1(10,20);
	p1.display();
	Point p2(30,40);
	p2.display();
	Point p3(50,60);
	float result = p3.pointD(p1,p2);
	cout<<"Distance between 2 point is "<<result;
	return 0;
}

