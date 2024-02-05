#include<iostream>
using namespace std;
int main()
{
	int a[100],n1,n2,b[100],c[100],i,n3;
	cout<<"Enter the size of array 1:";
	cin>>n1;
	cout<<"Enter the elements in array:";
	for(i=0;i<n1;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the size of array 2:";
	cin>>n2;
	cout<<"Enter the elements in array:";
	for(i=0;i<n2;i++)
	{
		cin>>b[i];
	}
	for(i=0;i<n3;i++ )
	{
		c[i]=a[i]+b[i];
	}
	n3=n1+n2;
	for(i=0;i<n3;i++)
	{
	cout<<c[i]<<endl;
}
	return 0;
}
