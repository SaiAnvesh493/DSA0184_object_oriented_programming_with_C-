#include<iostream>
using namespace std;
int vote(int x)
{
	if(x<18)
	{
		cout<<"Not eligible for voting";
		int y=18-x;
		cout<<"Still"<<y<<"years to vote";
	}
	else
	{
		cout<<"U Can Vote";
	}
}
int main()
{
	int n,m;
	cout<<"Enter the age:";
	cin>>n;
	m=vote(n);
	cout<<m;
	return 0;	
}
