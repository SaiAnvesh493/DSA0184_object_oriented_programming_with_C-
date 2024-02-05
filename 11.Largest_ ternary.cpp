#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	cout<<"Enter the 1st number:";
	cin>>a;
	cout<<"Enter the 2nd number:";
	cin>>b;
	c=(a>b) ? a:b;
	cout<<"Largerst number is"<<c;
	return 0;
}
