#include<iostream>
using namespace std;
int main()
{
	int n1,n2,i,gcd=0,lcm;
	cout<<"Enter the 1st number:";
	cin>>n1;
	cout<<"Enter the 2nd number:";
	cin>>n2;
	for(i=1;i<=n1 && i<=n2; i++)
	{
		if(n1%i==0 && n2%i==0)
		{
			gcd=i;
		}
	}
	lcm=(n1*n2)/gcd;
	cout<<gcd<<endl;
	cout<<lcm<<endl;
}
