#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"enter the num";
	cin>>num;
	if(num>0){
		cout<<num<<"is positive"<<endl;
	}
	else if(num<0){
		cout<<num<<"is nagative"<<endl;
	}
	else{
		cout<<num<<"is zero"<<endl;
	}
}
