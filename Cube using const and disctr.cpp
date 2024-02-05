#include<iostream>
using namespace std;
class cube
{
	public: int n,i;
	cube(int n)
	{
		cout<<"cube calculation object created"<<endl;
	}
	~cube()
	{
		cout<<"Cube calculation destroyed"<<endl;
	}
	void display(int n)
	{
		for(i=1;i<=n;i++)
		{
			cout<<" Cube of "<< i <<" is" << i*i*i<<endl;
		}
	}
};
int main()
{
	int n;
	cout<<"Enter the number:";
	cin>>n;
	cube obj(n);
	obj.display(n);
	return 0;
}
