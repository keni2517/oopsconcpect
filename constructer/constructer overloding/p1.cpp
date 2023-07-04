#include<iostream>
using namespace std;
class test{
	public:
	test()
	{
		cout<<"Defualt constructor is called...."<<endl;
	}
	test(int a)
	{
		cout<<"value of a is:"<<a<<endl;
	}
	test(int a,int b)
	{
		cout<<"addittion of a and b is:"<<a+b<<endl;
	}
	test(double a,double b)
	{
		cout<<"prouduct of a and b is:"<<a*b<<endl;
	}
	test(int a,int b,int x)
	{
		cout<<"addittion of a,b and x is:"<<a+b+x<<endl;
	}
};
int main()
{
	test  a(10,20),b(5.5,2.3),c(1,2,3),t(1,2);
}