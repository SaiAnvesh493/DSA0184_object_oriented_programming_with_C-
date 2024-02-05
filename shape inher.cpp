#include<iostream>
using namespace std;
int h,w,ar,pe,ar1,pe1,s1,s2,s3;
class shape{
	public:
		void display()
		{
			cout<<"Enter the heigth:";
			cin>>h;
			cout<<"Enter the width:";
			cin>>w;
		}
};
class rec:public shape
{
	public:
		void display1()
		{
			display();
			ar=h*w;
			cout<<"The area of rectangle is "<<ar<<endl;
			pe=2*(h+w);
			cout<<"The peremeter of the rectangle is"<<pe<<endl;
		}
		
};
class tri:public shape
{
	public:
		void display2()
		{
			display();
			ar1=(h+w)/2;
			cout<<"the area of tri:"<<ar1<<endl;
			cout<<"Enter the 1st side of the triangel:";
			cin>>s1;
			cout<<"Enter the 2nd side of the triangel:";
			cin>>s2;
			cout<<"Enter the 3rd side of the triangel:";
			cin>>s3;
			pe1=s1+s2+s3;
			cout<<"the pere of the traiangle:"<<pe1<<endl;
		}
};
int main()
{
	rec obj;
	tri obj1;
	obj.display1();
	obj1.display2();
	return 0;
}
