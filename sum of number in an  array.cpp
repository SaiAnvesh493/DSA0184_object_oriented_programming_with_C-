#include<iostream>
using namespace  std;
int main()
{
	int n,a[100],i,sum=0;
	cout<<"enter the size of array:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter the elemnts:";
		cin>>a[i];
		sum=sum+a[i];
	}
	cout<<sum;
}
