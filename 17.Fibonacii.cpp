#include<iostream>
using namespace std;
int main()
{
	int n,a=0,b=1,c,i;
	cout<<"Enter the number:";
	cin>>n;
	cout<<a<<endl<<b<<endl;
	for(i=2;i<n;i++)
	{
		c=a+b;
		cout<<c<<endl;
		a=b;
		b=c;
	}
	
	return 0;	
}
