#include<iostream>
using namespace std;
class Bank
{
	public:
		int acc_no;
		int balance;
		Bank(int acc_no,int balance)
		{
			this->acc_no=acc_no;
			this->balance=balance;
		}
		~Bank()
		{
			cout<<"Account Number;"<<acc_no<<"Is been deleted";
		}
		void deposit(int amount)
		{
			balance=balance+amount;
		}
		void withdraw(int amount)
		{
			if (balance>=amount)
			{
				balance=balance-amount;
			}
			else
			{
				cout<<"Insufficient funds";
			}
		}
		int getbalance()
		{
		   return balance;	
		}
};
int main()
{
	int num,balance,dep,wd;
	cout<<"Enter the account number:";
	cin>>num;
	cout<<"Enter the balance:";
	cin>>balance;
	cout<<"Enter the amount to deposite:";
	cin>>dep;
	cout<<"Enter the amount to withdraw:";
	cin>>wd;
	Bank obj(num,balance);
	obj.deposit(dep);
	obj.withdraw(wd);
	cout<<obj.getbalance();
	return 0;
}
