#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
	string str;
	 cout<<"Enter the string:";
	 getline(cin,str);
	 transform(str.begin(), str.end(), str.begin(),::toupper);
	 cout<<str<<endl;
	 transform(str.begin(), str.end(), str.begin(),::tolower);
	 cout<<str<<endl;
	 return 0;
}
