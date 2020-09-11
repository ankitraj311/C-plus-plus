#include<iostream>
using namespace std;

int main()
{





  int mark[4] = {10, 20, 30, 40};
  int mathmarks[4];
  cout <<"Value of Marks is :-"<<endl;
  cout <<mark[0]<<endl;
  cout <<mark[1]<<endl;
  cout <<mark[2]<<endl;
  cout <<mark[3]<<endl;
  mathmarks[0] = 111;
  mathmarks[1] = 222;
  mathmarks[2] = 333;
  mathmarks[3] = 444;
  cout <<"Value of MathMarks is :-"<<endl;
  cout <<mathmarks[0]<<endl;
  cout <<mathmarks[1]<<endl;
  mathmarks[2] = 10000;
  cout <<mathmarks[2]<<endl;
  cout <<mathmarks[3]<<endl;

  for(int i=0; i<4; i++)
  {
    cout <<mathmarks[i]<<" ";
  }

  cout <<"With Do WHILE LOOP"<<endl;
  int i = 0;
  do
  {
    cout <<mathmarks[i]<<" ";
    i++;
  }
  while(i<4);
  
  cout <<"Value of Array with Array Arithmetic"<<endl;

  int *p = mark;
  cout <<*(p + 0)<<endl;
  cout <<*(p + 1)<<endl;
  cout <<*(p + 2)<<endl;
  cout <<*(p + 3)<<endl;

  cout <<"Computations"<<endl;
  cout <<*(p++)<<endl;
  cout <<*(++p)<<endl;



  return 0;
}
