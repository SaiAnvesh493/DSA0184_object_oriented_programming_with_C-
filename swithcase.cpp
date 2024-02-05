#include<iostream>
using namespace std;
int main()
{
	int a,b;
	char oper;
	cout<<"Enter the 1st number:";
	cin>>a;
	cout<<"Enter the 2nd number:";
	cin>>b;
	cout<<"choose operarion (+, -, * , /)";
	cin>>oper;
	switch(oper)
	{
		case '+':
			cout<<"Result:"<<a+b<<endl;
			break;
		case '-':
			cout<<"Result:"<<a-b<<endl;
			break;
		case '*':
			cout<<"Result:"<<a*b<<endl;
			break ;
		case '/':
			cout<<"Result:"<<a/b<<endl;
			break;
		case '%':
			cout<<"Reslut:"<<a%b<<endl;
			break;
		default:
			cout<<"Invalid operation";
	}
	return 0;
	
}
