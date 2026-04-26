#include<iostream>
using namespace std;
class Time
{
 	private:
	  int H,M,S;
	public:
  	void getdata()
  {
   cout<<"Enter H, M and S: ";
   cin>>H>>M>>S;
  }
  void putdata()
  {
  	while(M>=60)
  	{
  		M++;
  		S+=60;
  	}
   cout<<"Time = "<<H<<" Hours :" << M <<" Minutes :"<<S<<" Second";
  }
};
int main()
{
 Time T1;
 T1.getdata();
 T1.putdata();
 return 0;
}
