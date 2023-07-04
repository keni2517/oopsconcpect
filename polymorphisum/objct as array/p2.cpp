#include<iostream>
using namespace std;
class test{
	int m,e,c,total;
	float pr;
	public:
	void setdata()
	{
		cout<<"enter maths marks:";
		cin>>m;
		cout<<"enter english marks:";
		cin>>e;
		cout<<"enter chemistry marks:";
		cin>>c;
		total=e+m+c;
		pr=total/3;
	}
	void getdata()
	{
		cout<<"maths:"<<m<<endl;
		cout<<"english:"<<e<<endl;
		cout<<"chemistry:"<<c<<endl;
		cout<<"total:"<<total<<endl;
		cout<<"pr:"<<pr<<endl;
	}
};
int main()
{
	test a[5];
	int i;
	for(i=0;i<2;i++)
	{
		a[i].setdata();
	}
	for(i=0;i<2;i++)
	{
		a[i].getdata();
	}
}