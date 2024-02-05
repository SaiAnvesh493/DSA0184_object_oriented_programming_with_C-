#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the 1st number:";
	cin>>a;
	cout<<"Enter the 2nd number:";
	cin>>b;
	string c=(a==b) ?"equal":"not equal";
	cout<<c;
	return 0;
}
