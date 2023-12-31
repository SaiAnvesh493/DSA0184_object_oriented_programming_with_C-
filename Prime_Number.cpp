#include<iostream>
using namespace std;
int main()
{
	int n,i,c=0;
	cout<<"Enter the number:";
	cin>>n;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
		   c=1;
		   break;
		}
	}
	if(c==1)
		{
			cout<<"Not a prime number";
		}
	else
		{
			cout<<"Its a prime number";
		}
	return 0;
		
}
