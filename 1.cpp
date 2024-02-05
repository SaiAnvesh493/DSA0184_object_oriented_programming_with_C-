#include<iostream>
using namespace std;
class arr
{
  public:
  	int n,i;
  	void display(int n)
  	{
  		for(i=1;i<=n;i++)
  		{
  			cout<<i<<endl;
		  }
  		
	  }
};
int main()
{
	int n;
	cout<<"Enter the end number:";
	cin>>n;
	arr obj;
	obj.display(n);
	return 0;
}
