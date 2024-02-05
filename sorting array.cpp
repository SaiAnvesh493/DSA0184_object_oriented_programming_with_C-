#include<iostream>
using namespace std;
int main()
{
	int n,a[100],i,j,temp;
	cout<<"Enter the size of array:";
	cin>>n;
	cout<<"Enter the elements:";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
		cout<<a[i]<<endl;
	}
}
