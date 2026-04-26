#include<iostream>
using namespace std;
class COMPLEX{
 private:
  int num1,num2;
  char i;

  public:
  void getdata()
  {
   cout<<"Enter a first number: ";
   cin>>num1;
   
   cout<<"Enter a second number: ";
   cin>>num2;
   
  }
  void putdata()
  {
   cout<<"Complex number = "<<num1<<"+"<<"i"<<num2;
  }
};
int main()
{
 COMPLEX C1,C2;
 C1.getdata();
 C1.putdata();
 return 0;
}
