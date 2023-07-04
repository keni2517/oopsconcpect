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
	box operator*(box &n)
	{
		box t;
		t.l=l*n.l;
		t.w=w*n.w;
		t.h=h*n.h;
		return t;
	}
};
int main()
{
	box b,a,c;
	a.setdata(6,2,1);
	cout<<"Box A volum is:"<<a.getdata()<<endl;
	b.setdata(7,7,7);
	cout<<"Box B volum is:"<<b.getdata()<<endl;
	c=a*b;
	cout<<"Box c volum is:"<<c.getdata()<<endl;
}