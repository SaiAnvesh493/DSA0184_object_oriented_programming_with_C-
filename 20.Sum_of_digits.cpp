#include<iostream>
using namespace std;
int main()
{
	int n,temp,sum=0;
	cout<<"Enter the number:";
	cin>>n;
	while(n!=0)
	{
		temp=n%10;
		sum=sum+temp;
		n=n/10;
	}
	cout<<"Sum of the digits:"<<sum;
	return 0;
}
