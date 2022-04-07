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
	vec.pop_back();
	display(vec); //sending object
	//It will display only 3 element because we are poping back 1 element in the end
	//with the help of pop_back function

	return 0;
}
