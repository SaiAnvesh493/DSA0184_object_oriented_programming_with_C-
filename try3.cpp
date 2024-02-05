#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the 1st number:";
	cin>>a;
	cout<<"Enter the 2nd number:";
	cin>>b;
	cout<<"Enter the 3rd number";
	cin>>c;
	if(a>b && a>c)
	{
		cout<<"the largest number is"<<a;
	}
	else if(b>c && b>c)
	{
		cout<<"the largest number is"<<b;
	}
	else
	{
		cout<<"the largest number is"<<c;
	}
	return 0;
}
