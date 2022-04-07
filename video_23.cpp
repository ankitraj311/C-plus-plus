//Memory Allocation
//
//
#include<iostream>
using namespace std;

class shop 
{
	int item_id[100];
	int item_price[100];
	int counter;
	public:
	void setPrice(void);
	void getPrice(void);
	void intcounter(void)
	{
		counter=0;
	}
};

void shop :: setPrice(void)
{
	cout<<"Enter Id of your item no "<<(counter+1)<<endl;
	cin>>item_id[counter];
	cout<<"Enter price of your item no"<<endl;
	cin>>item_price[counter];
	counter++;
}


void shop :: getPrice(void)
{
	for(int i=0; i<counter;i++)
	{
		cout<<"Item no is "<<item_id[i]<<" and price is "<<item_price[i]<<endl;
	}
}


int main()
{
	shop dukaan;
	dukaan.intcounter();
	dukaan.setPrice();
	dukaan.setPrice();
	dukaan.setPrice();
	dukaan.setPrice();
	dukaan.getPrice();
}

