#include<iostream>
using namespace std;
class box{
	int l,w,h;
	public:
	void setdata(int a,int b,int c)
	{
		l=a;
		w=b;
		h=c;
	}
	int getdata()
	{
		return l*w*h;
	}
	friend box operator++(box m)
	{
		box t;
		t.l=++m.l;
		t.w=++m.w;
		t.h=++m.h;
		return t;
	}
};
int main()
{
	box a,b;
	a.setdata(2,5,8);
	cout<<"volum of box A is:"<<a.getdata()<<endl;
	b=++a;
	cout<<"volum of box B is:"<<b.getdata()<<endl;
}
