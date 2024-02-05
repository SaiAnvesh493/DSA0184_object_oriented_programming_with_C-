#include <iostream>
using namespace std;

class Count
 {
    int value;

   public:

    Count() : value(5) {}

    void operator ++ () 
	{
       int y= ++value;
    }

    void display() 
	{
        cout << "prefixs Count: " << y << endl;
    }
    void operator++()
	{
       	value++;
	}
	void cal(){
		cout<<"postfixs count:"<<value<<endl;
	}
};

int main() {
    Count count1;

    count1++;
   count1.display();
    ++count1;
    count1.cal();
    return 0;
}
