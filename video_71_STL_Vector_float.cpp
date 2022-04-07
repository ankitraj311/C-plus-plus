#include<iostream>
#include<vector>
using namespace std;

template<class T=float>
void display(T &v) //It will take the object name of vector, which is vec
{
	for(int i=0; i<v.size(); i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
}


int main()
{

	vector<float> vec; //vector for integer
	float element; //varible to take element
	for(int i=0; i<4; i++) //loop to take the values for vector
	{
		cout<<"ENter an element to add to this vector"<<endl;
		cin>>element;
		vec.push_back(element); //pushback fucntion is used to add elements to the vector
	
	}
	display(vec); //sending object

	return 0;
}
