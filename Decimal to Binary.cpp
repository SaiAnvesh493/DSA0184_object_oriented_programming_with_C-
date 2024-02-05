#include<iostream>
using namespace std;
int main()
{
	int n,num,i=1,temp,sum=0;
	cout<<"Enter the number:";
	cin>>n;
	num=n;
	while(num!=0)
	{
		temp=num%2;
		sum=sum+temp*i;
		num=num/2;
		i=i*10;
	}
	cout<<sum;
	return 0;
}
