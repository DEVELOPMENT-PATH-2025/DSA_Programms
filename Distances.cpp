#include<iostream>
using namespace std;
class Distance
{
 	private:
	  int Feet,Inches;
	public:
  	void getdata()
  {
   cout<<"Enter Feet and Inches: ";
   cin>>Feet>>Inches;
  }
  void putdata()
  {
  	while(Inches>=12)
  	{
  		Feet++;
  		Inches-=12;
  	}
   cout<<"\nDistance = "<<Feet<<" Feet and "<<Inches<<" Inches";
  }
};
int main()
{
 Distance D1,D2;
 D1.getdata();
 D2.getdata();
 D1.putdata();
 D2.putdata();
 return 0;
}
