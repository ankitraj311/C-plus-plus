#include<iostream>
using namespace std;

class shopItem
{
	int id;
	float price;
	public:
		void setData(int a, float b)
		{
			id=a;
			price=b;
		}

		void getData()
		{

			cout<<"Value of id is "<<id<<endl;
			cout<<"Value of price is "<<price<<endl<<endl;
		}
};


int main()
{
	int size=3;
	//int *ptr=&size; //transfering address of size to ptr
	//int *ptr=new int[34]; // hey complier devta, Please 34 intergers ko store krne ka space space allocate kr doo. This is also doing same but by another way

	// 1. General Item
	// 2. Veggi item
	// 3. Hardware item

	//shopItem s1; //1
	//s1.setData(101, 1324.43);  //1
	//s1.getData(); //1
	
	int p;
	float q;
	shopItem *s1 = new shopItem[size];
	shopItem *s1Temp=s1;
	for(int i=0;i<size;i++)
	{
		cout<<"Please Eneter calue of Id & Prize for ShopItem["<<(i+1)<<"]"<<endl;
		cin>>p>>q;
		s1->setData(p,q);
		s1++;
	}

	for(int i=0;i<size;i++)
	{
		cout<<"Data for shopItem["<<(i+1)<<"]"<<endl;
		s1Temp->getData();
		s1Temp++;
	}
}
