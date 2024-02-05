#include<iostream>
using namespace std;
int fact(int n)
{
	int fact=0;
	for(int i=1;i<=n;i++)
	{
		fact=fact*i;
	}
}
int main()
{
	int n;
	cout<<"Enter the Number";
	cin>>n;
	cout<<fact(n);
	return 0;
}
