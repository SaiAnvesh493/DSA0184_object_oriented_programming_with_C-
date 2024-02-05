#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the number:";
	cin>>n;
	if(n==0)
	{
		cout<<"The number is zero:";
	}
	else if (n<0)
	{
		cout<<"The number is nagative";
	}
	else
	{
		cout<<"Its positive";
	}
	return 0;
}
