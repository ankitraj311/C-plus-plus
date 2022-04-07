#include<iostream>
#include<vector>
using namespace std;

template <class T>
void display(T &v) //It will take the object name of vector, which is vec
{

	cout<<"Displaying the Display"<<endl;

	for(int i = 0; i < v.size(); i++)
	{
		cout<<v[i]<<" ";
	}
}


int main()
{

//	vector<int> vec1; //vector for integer
//	display(vec1);


//	vector<float> vec2(4);
//	vec2.push_back(12.21);
//	display(vec2);


//	vector<char> vec3(5);
//	vec3.push_back('W');
//	display(vec3);


	vector<int> vec4(6,13);
	display(vec4);
	cout<<"Size of vec4 is "<<vec4.size();
	return 0;
}
