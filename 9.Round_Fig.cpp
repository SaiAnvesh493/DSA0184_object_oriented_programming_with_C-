#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float n;
	cout<<"Enter the number:";
	cin>>n;
	int floor_number=floor(n);
	int ceil_number=ceil(n);
	cout<<floor_number<<endl;
	cout<<ceil_number;
	return 0;
}
