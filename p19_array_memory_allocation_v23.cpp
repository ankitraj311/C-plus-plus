#include<iostream>
using namespace std;









class shop
{
  int itemId[100], Price[100], counter;
  public:
        void initCounter(void)
	{
          counter=0;
	 }
        void setData(void);
	void getData(void);
};

void shop :: setData(void)
{
  cout <<"Enter Item Id of "<<counter+1 <<endl;
  cin >>itemId[counter];
  cout <<"Enter Price of "<<counter <<endl;
  cin >>Price[counter];
  counter++;
}

void shop :: getData(void)
{
  for(int i=0; i<counter; i++)
  {
    cout <<"Price of "<<itemId[i] <<" Item is "<<Price[i]<<endl;
  }

}

int main()
{
  shop dukan;
  dukan.initCounter();
  dukan.setData();
  dukan.setData();
  dukan.setData();
  dukan.getData();
}
