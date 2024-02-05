#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str1,str;
	int n,i;
	cout<<"Enter the string:";
	getline(cin,str1);
	n=str1.length();
	for(i=n-1;i>=0;i--)
	{
		str=str+str1[i];
	}
	cout<<str<<endl;
	if(str1==str)
	{
		cout<<"Its a pailindrome";
	}
	else 
	{
		cout<<"Its not an palindrome";
	}
	return 0;
}
