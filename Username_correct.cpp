#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1,str2;
	cout<<"Enter the Username:";
	getline(cin,str1);
	cout<<"Re-Enter the username:";
	getline(cin,str2);
	if(str1==str2)
	{
		cout<<"Enter username is correct";
	}
	else
	{
		cout<<"Incorrect username";
	}
	return 0;
}
