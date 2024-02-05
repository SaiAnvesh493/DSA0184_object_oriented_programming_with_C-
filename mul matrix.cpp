#include<iostream>
using namespace std;
int main()
{
	int a[10][10],b[10][10],t[10][10],r,c,i,j;
	cout<<"Enter the Row:";
	cin>>r;
	cout<<"Enter the column:";
	cin>>c;
	cout<<"Enter the first matrix element:";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>a[i][j];
		}
	}
	cout<<"Enter the second matrix element:";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			cin>>b[i][j];
		}
	}
	cout<<"Multiply of the matrix:";
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			t[i][j]=a[i][j]*b[i][j];
			cout<<t[i][j]<<"\t";
		}
		cout<<endl;
	}
	return 0;	
}
