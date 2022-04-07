#include<iostream>
#include<string>
using namespace std;

template <class T> //this is th template for the object
//With the help of this we are passing out DataType as the varible
class vector{      //vector is the name for class

		public:
			T *arr; //*arr  is type of T
			int size; //size is type of size
			vector(int m) //passing m as the size in vector
			{
				size = m;  //setting size in vector
				arr  = new T[size]; //taking memory equal to size of m for array
			}
			//int dotProduct(vector &v) //will accept object address as parameter
			T dotProduct(vector &v) //will accept object address as parameter
			{
				T d=0; //d is of T type
				for(int i = 0; i < size; i++)
				{
					d += this->arr[i] + v.arr[i]; //product
				}
				return d;
			}

};

int main()
{

/*
	vector v1(3);
	v1.arr[0]=4;
	v1.arr[1]=3;
	v1.arr[2]=2;



	vector v2(3);
	v2.arr[0]=1;
	v2.arr[1]=0;
	v2.arr[2]=1;

*/



	vector <float>v1(3);
	v1.arr[0]=1.1;
	v1.arr[1]=1.1;
	v1.arr[2]=1.1;



	vector <float>v2(3);
	v2.arr[0]=1.1;
	v2.arr[1]=1.1;
	v2.arr[2]=1.1;

	
	float a = v1.dotProduct(v2);
	cout<<"Value after Product is "<<a<<endl;
	return 0;
}
