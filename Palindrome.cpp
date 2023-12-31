#include<iostream>
using namespace std;
int main()
{
	int n,temp,sum=0,num;
	cout<<"Enter the number:";
	cin>>n;
	num=n;
	while(num!=0)
	{
		temp=num%10;
		sum=sum*10+temp;
		num=num/10;
	}
	if(sum==n)
	{
		cout<<"Palindrome";
	}
	else
	{
		cout<<"Not a Palindrome";
	}
	return 0;
}
