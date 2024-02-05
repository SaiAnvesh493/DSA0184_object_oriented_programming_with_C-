#include<iostream>
using namespace std;
class happy
{
	public:
		void display(int a,int b)
		{
		
		int t=a+b;
		cout<<"Add of"<<a<<"and"<<b<<"is"<<t;
        }
};
int main()
{
	happy add;
   int a,b;
		cout<<"Enter the 1st number:";
		cin>>a;
		cout<<"Enter the 2nd number:";
		cin>>b;	
		add.display(a,b);
		return 0;
}
