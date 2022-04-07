#include<iostream>
#include<vector>
using namespace std;

void display(vector<int> &v) //It will take the object name of vector, which is vec
{
	for(int i=0; i<v.size(); i++)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
}


int main()
{

	vector<int> vec; //vector for integer
	int element; //varible to take element
	for(int i=0; i<4; i++) //loop to take the values for vector
	{
		cout<<"ENter an element to add to this vector"<<endl;
		cin>>element;
		vec.push_back(element); //pushback fucntion is used to add elements to the vector
	
	}
	display(vec); //sending object

	return 0;
}
