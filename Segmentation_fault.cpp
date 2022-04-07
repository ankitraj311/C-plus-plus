#include<iostream>
using namespace std;

class vector
{
	public:
		int *arr;
		int size;

			vector(int m)
			{
				size = m;
			}
			int dotProduct(vector &v)
			{
				int d=0;
				for(int i=0; i<size; i++)
				{
					d = d + (this->arr[i] + v.arr[i]);
				}
			}
};


int main()
{
	vector v1(3);
	v1.arr[0] = 1;
	v1.arr[1] = 1;
	v1.arr[2] = 1;


	vector v2(3);
	v2.arr[0] = 1;
	v2.arr[1] = 1;
	v2.arr[2] = 1;


	int result = v1.dotProduct(v2);
	cout<<"Result is "<<result<<endl;
	return 0;
}
