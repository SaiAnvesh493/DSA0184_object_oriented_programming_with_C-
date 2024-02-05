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
		sum=temp*temp*temp;
		num=num/10;
	}
	if(sum=n)
	{
		cout<<"Its an Armstrong Number";
	}
	else
	{
		cout<<"Its not an Armstrong Number ";
	}
}
