#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter the char:";
	cin>>ch;
	if(ch=='A'||'E'||'I'||'O'||'U')
	{
		cout<<"Its a vowel";
	}
	else
	{
		cout<<"Its a const";
	}
	return 0;
}
