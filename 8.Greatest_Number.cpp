#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the 1st number:";
	cin>>a;
	cout<<"Enter the 2nd number:";
	cin>>b;
	if(a<b)
	{
		cout<<a<<"Less than "<<b;
	}
	else if(a>b)
	{
		cout<<a<<"Greater than "<<b;
	}
	else
	{
		cout <<"Both are equal";
	}
	return 0;
}
