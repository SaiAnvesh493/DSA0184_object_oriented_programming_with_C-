#include<iostream>
#include<string>
using namespace std;

string str;
char ch;
int n1, n2;

class person {
public:
    virtual void display() {
        cout << "Enter the person name: ";
        cin >> str;
    }

    virtual void showMessage() {
        cout << "Class person created." << endl;
    }
};

class student : public person {
public:
    void display1() {
        cout << "Enter the person is student or teacher (S/T): ";
        cin >> ch;
    }

    void showMessage() override {
        cout << "Class student created." << endl;
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

    void showMessage() override {
        cout << "Class teacher created." << endl;
    }
};

int main() {
    student obj;
    teacher obj1;

    obj.display();
    obj.display1();
    obj.showMessage();

    obj1.display();
    obj1.display2();
    obj1.showMessage();

    return 0;
}

