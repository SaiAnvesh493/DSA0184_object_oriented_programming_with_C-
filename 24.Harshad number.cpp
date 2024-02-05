#include<iostream>
using namespace std;
int main()
{
	int n,num,temp,sum=0;
	cout<<"Enter the number:";
	cin>>n;
	num=n;
	while(num!=0)
	{
		temp=num%10;
		sum=sum+temp;
		num=num/10;
	}
	if(num%sum==0)
	{
		cout<<"Its an Harshad Number";
	}
	else
	{
		cout<<"Its not an Harshad Number";
	}
	return 0;
	
}
