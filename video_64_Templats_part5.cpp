#include<iostream>
using namespace std;

template <class T>
class vector
{
	public:
		T *arr;
		int size;

			vector(int m)
			{
				size = m;
				arr = new T[size];
			}
			T dotProduct(vector &v)
			{
				T d=0;
				for(int i=0; i<size; i++)
				{
					d = d + (this->arr[i] * v.arr[i]);
				}
					return d;
			}
};


int main()
{
	vector <int> v1(3);
	v1.arr[0] = 2.2;
	v1.arr[1] = 2.2;
	v1.arr[2] = 2.2;


	vector <int> v2(3);
	v2.arr[0] = 4.2;
	v2.arr[1] = 4.2;
	v2.arr[2] = 4.2;


	int result = v1.dotProduct(v2);
	cout<<"Result is "<<result<<endl;
	return 0;
}
