#include <iostream>
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
			c++;
		}
	}
	if(c==0)
	{
		cout<<"Its a Prime Number";
	}
	else
	{
		cout<<"Its Not a Prime Number";
	}
	return 0;
}
