#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter the 1st number: ";
	cin>>a;
	cout<<"Enter the 2nd number:";
	cin>>b;
	int add=a+b;
	int sub=a-b;
	int mul=a*b;
	int div=a/b;
	int mod=a%b;
	cout<<"Add of"<<a<<"and"<<b<<"is"<<add<<endl;
	cout<<"Sub of"<<a<<"and"<<b<<"is"<<sub<<endl;
	cout<<"Mul of"<<a<<"and"<<b<<"is"<<mul<<endl;
	cout<<"Div of"<<a<<"and"<<b<<"is"<<div<<endl;
	cout<<"Mod of"<<a<<"and"<<b<<"is"<<mod<<endl;
	return 0;
}
