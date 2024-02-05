#include<iostream>
#include<cmath>
using namespace std;
class cube
{
	public:
		int n,i;
		~cube()
		{
			for(i=1;i<=n;i++)
			{
				cout<<pow(i,3);
			}
		}
};
int main()
{
	cube obj();
	int n;
	cout<<"Enter the number:";
	cin>>n;
	return 0;
}
