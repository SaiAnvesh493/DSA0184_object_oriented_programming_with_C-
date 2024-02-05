
#include<iostream>
using namespace std;
int h,w,a1,a2;
class shape
{
	public:
		void getdata()
		{
			cout<<"enter the heigth:";
			cin>>h;
			cout<<"Enter the width:";
			cin>>w;
		}		
};
class rect:public shape
{
	public:
		
	void getdata1()
	{   
		a1=h*w;
		cout<<a1;
	}
};
class triangle:public shape
{ public:
	void getdata1()
	{
	a2=(h*w)/2;
	cout<<a2;
 }
};
int main()
{
	rect obj;
	triangle obj1;
	obj.getdata();
	obj.getdata1();
	obj1.getdata();
	obj1.getdata1();
	return 0;
}
