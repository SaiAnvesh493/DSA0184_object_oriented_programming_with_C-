#include<iostream>
using namespace std;
class point{
	public:
		int n;
		void display()
		{
			cout<<"Enter the number:";
			cin>>n;
		}	
		void display1()
		
		{
			cout<<"Entered number:"<<n<<endl;
			cout<<"Address of the nmber"<<static_cast<void*>(&n)<<endl	;		
		}	
};
int main()
{
	point obj;
	obj.display();
	obj.display1();
	return 0;
}
