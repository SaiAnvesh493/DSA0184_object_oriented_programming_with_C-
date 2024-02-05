#include<iostream>
using namespace std;
int main()
{
	int n,a[100],i,sum=0;
	cout<<"Enter the size of array:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter the elements:";
		cin>>a[i];	
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	cout<<sum;
	return 0;
}


