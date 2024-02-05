#include<iostream>
using namespace std;
int main()
{
	int n,a=0,b=1,c,i;
	cout<<"Enter the Number:";
	cin>>n;
	if(n==0)
	{
		cout<<"1";
	}
	else if(n==1)
	{
		cout<<"1";
	}
	else
	{
		cout<<"1";
		for(i=2;i<n;i++)
		{
			c=a+b;
		    cout<<c<<endl;
		    a=b;
		    b=c;
		}
	
	}
}
