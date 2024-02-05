#include<iostream>
#include<cmath>
using namespace std;
int add(int a,int b)
{
	return pow(a,b);
}
double add(double c,double d)
{
	return pow(c,d);
}
int main()
{
	int a,b;
	double c,d;
	cout<<"Enter the 1st number:";
	cin>>a;
	cout<<"Enter the 2nd number:";
	cin>>b;
	cout<<"Enter the 1st number:";
	cin>>c;
	cout<<"Enter the 2nd number:";
	cin>>d;
	cout<<"sum of number"<<add(a,b)<<endl;
	cout<<"sum of number"<<add(c,d);
	return 0;
}
