#include<iostream>
using namespace std;
int main()
{
	int a[100],n,i,j;
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
			if(a[i]==a[j])
			{
				a[j]=a[n-1];
				n--;
				j--;
			}
		}
	
	}
	for(i=0;i<n;i++)
	{
	    cout<<a[i]<<" ";
	}
	return 0;
}
