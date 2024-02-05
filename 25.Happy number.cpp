#include<iostream>
using namespace std;
int main()
{
	int n,num,temp,sum=0;
	cout<<"Enter the Number:";
	cin>>n;
	num=n;
	while(num!=0)
	{
		temp=num%10;
		num=num/10;
		sum=sum+(temp*temp);		
	}
	if(sum==1)
	{
		cout<<"Happy Number";
	}
	else if (sum==4)
	{
		cout<<"Not a Happy Number";
	}
	else
	{
		cout<<"Not a Happy number";
	}
	return 0;
	
}
