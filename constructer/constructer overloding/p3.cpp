#include<iostream>
using namespace std;
class area{
	public:
	area(int a,int b)
	{
		cout<<"area of square:"<<a*b<<endl;
	}
	area(double a,double b)
	{
		cout<<"area of triangle:"<<a*b/2<<endl;
	}
	area(int a,int b,int c)
	{
		cout<<"area of trapezium:"<<(a+b)*c/2<<endl;	
	}		
};
int main()
{
	area a(5,4);
}