#include<iostream>
using namespace std;
class test{
	public:
	test()
	{
		cout<<"defualt constructor is called...."<<endl;
	}
	test(int a)
	{
		cout<<"parameterized constructer is called..a:"<<a<<endl;	
	}
	test(char a)
	{
		cout<<"parameterized constructer is called..char:"<<a<<endl;
	}
};
int main()
{
	test t,a(10),c('A');
}