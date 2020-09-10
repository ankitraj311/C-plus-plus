//Selection Control Sturcture
#include<iostream>
using namespace std;
int main()
{





  int age;
  cout <<"Tell my your Age"<<endl;
  cin >>age;
//Selection Control Structure
/*
  if(age<18 && age>0)
  {
    cout <<"You cant come to party"<<endl;
  }
  else if(age==18)
  {
    cout <<"You are a Kid, but You can come to party"<<endl;
  }
  else if(age<0)
  {
    cout <<"You are not yet born"<<endl;
  }
  else
  {
    cout <<"You can come to party"<<endl;
  }
 */

//loop Sturcture



  switch(age)
  {
    case 18:
	    cout <<"You are 18"<<endl;
	    break;
    case 22:
	    cout <<"You are 22"<<endl;
	    break;
    case 2:
	    cout <<"You are 2"<<endl;
	    break;
    default:
	    cout <<"Nothing Get matched"<<endl;
	    break;
  }

    cout <<"Done with Switch case";
  return 0;
}
