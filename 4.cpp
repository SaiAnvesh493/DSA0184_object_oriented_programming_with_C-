#include<iostream>
#include<string>
using namespace std;

string str;
char ch;
int n1, n2;

class person {
public:
	    virtual void display()
		{
        cout << "Enter the person name: ";
        cin >> str;
    }
};

class student : public person {
public:
    void display1() {
        cout << "Enter the person is student or teacher (S/T): ";
        cin >> ch;
    }
};

class teacher : public person {
public:
    void display2() {
        if (ch == 'S') {
            cout << "Enter the reg no: ";
            cin >> n1;
        } else if (ch == 'T') {
            cout << "Enter the fac id: ";
            cin >> n2;
        } else {
            cout << "Invalid!";
        }
    }
};

int main() {
    student obj;
    teacher obj1;

    obj.display();
    obj.display1();

    obj1.display();
    obj1.display2();

    return 0;
}

