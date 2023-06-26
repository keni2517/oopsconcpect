#include<iostream>
using namespace std;
class test{
	private:
	int a;
	public:
	void setdata()
	{
		cout<<"enter a:";
		cin>>a;
	}
	void getter()
	{
		cout<<"value of a:"<<a;
	}
};
int main()
{
	test z;
	z.setdata();
	z.getter();
}