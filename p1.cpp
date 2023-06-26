#include<iostream>
using namespace std;
class result{
	private:
	int maths,sci,eng,total;
	float per;
	public:
void dis()
{
	cout<<"maths\tenglish\tsci\ttotal\tper\tgrade\n";
	cout<<maths<<"\t"<<eng<<"\t"<<sci<<"\t"<<total<<"\t"<<per;
	if(maths<35||sci<35||eng<35|| per<35)
			cout<<"   fail";
		else if(per>=75)
			cout<<"  grade a";
		else if(per>=60)
			cout<<" grade b";
		 else if(per>=45)
			 cout<<" grade c";
		else
			 cout<<" pass";

}
void clac()
{
	total=maths+eng+sci;
	per=(float)total/3;
}
void setdata()
{
	cout<<"enter maths marks:"<<endl;
	cin>>maths;
	cout<<"enter english marks:"<<endl;
	cin>>eng;
	cout<<"enter sci marks:"<<endl;
	cin>>sci;
}
};
int main()
{
	result z;
	z.setdata();
	z.clac();
	z.dis();
}
	
	