#include<iostream>
using namespace std;
void display(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	cout<<fact;
}
int main()
{
	int n,a;
	cout<<"Enter the number:";
	cin>>n;
     display(n);
}
