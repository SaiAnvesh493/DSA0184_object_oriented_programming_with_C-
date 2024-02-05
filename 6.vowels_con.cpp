#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter the char:";
	cin>>ch;
	if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		cout<<"Its a vowel";
	}
	else
	{
		cout<<"Its a const";
	}
	return 0;
}
