#include<iostream>
using namespace std;
int fact(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	cout<<f;
}
int main()
{
	int n,fa;
	cout<<"Enter the number:";
	cin>>n;
	fa=fact(n);
	cout<<fact;
	return 0;
	
}
