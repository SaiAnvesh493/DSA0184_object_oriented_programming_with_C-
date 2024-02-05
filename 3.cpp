#include<iostream>
using namespace std;

class Point {
public:
    char ch;

    void display() {
        cout << "Enter the char: ";
        cin >> ch;
    }

    void display1() {
        cout << "Entered char: " << ch << endl;
        cout << "Address of char: " << static_cast<void*>(&ch) << endl;
    }
};

int main() {
    Point obj;
    obj.display();
    obj.display1();

    return 0;
}

