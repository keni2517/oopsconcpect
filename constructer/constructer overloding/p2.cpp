#include<iostream>
using namespace std;
class volum{
	public:
	volum(int a)
	{
		cout<<"volum of cube:"<<a*a*a<<endl;
	}
	volum(int l,int b,int h)
	{
		cout<<"volum of cubiod:"<<l*b*h<<endl;
	}
	volum(double r,double h)
	{
		cout<<"volum of cone :"<<1/3*3.14*r*r*h<<endl;
	}
	volum(int r,int h)
	{
		cout<<"volum of cylinder:"<<3.14*r*r*h<<endl;
	}	
};
int main()
{
	volum a(5),b(5,4,3);
}
