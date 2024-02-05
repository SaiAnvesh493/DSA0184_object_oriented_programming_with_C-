#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n,i;
	string str,s;
	cout<<"Enter the string:";
	getline(cin,str);
	n=str.length();
	for(i=n-1;i>=0;i--)
	{
	  s=s+str[i];
	  cout<<s;
	}
	if(str==s)
	{
		cout<<"Its a plindrome"<<endl;
	}
	else
	{
		cout<<"Its not a Plaindrome"<<endl;
	}
	return 0;
}
