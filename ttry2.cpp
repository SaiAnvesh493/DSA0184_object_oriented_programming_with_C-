#include<iostream>
using namespace std;
class sqrt
{
	public:int n,i;
	sqrt(int n)
	{
	   cout<<"Sqrt calculation started"<<endl;	
	}
	~sqrt()
	{
		cout<<"Sqrt calculation destroyed"<<endl;
	}
	void display(int n)
	{
		for(i=1;i<=n;i++)
		{
			cout<<"square of the number" << i << "is"<< i*i<<endl;
		}
	}
};
int main()
{
	int n;
	cout<<"Enter the number:";
	cin>>n;
	sqrt obj(n);
	obj.display(n);
	return 0;
}
