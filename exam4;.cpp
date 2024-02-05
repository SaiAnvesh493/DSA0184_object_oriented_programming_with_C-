#include<iostream>
#include<string>
using namespace std;

class vehicle {
public:
    int year;
    int model_no;

    void display() {
        cout << "Enter the year:";
        cin >> year;
        cout << "Enter the model no:";
        cin >> model_no;
        cout << year << " and " << model_no;
    }
};

class car : public vehicle {
public:
    string name;

    void display1() {
        cout << "Enter the car Name:";
        cin >> name;
        display(); 
        cout << name << " " << year << " " << model_no;
    }
};

int main() {
    car obj;
    obj.display1();
    return 0;
}

