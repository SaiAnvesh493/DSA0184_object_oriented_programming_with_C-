#include<iostream>
using namespace std;

class MyNumber {
private:
    int value;

public:
    MyNumber(int val) : value(val) {}
    MyNumber operator*(const MyNumber& other) const {
        MyNumber result(value * other.value);
        return result;
    }
    int getValue() const {
        return value;
    }
};

int main() {
    int num1, num2;

    std::cout << "Enter num1: ";
    std::cin >> num1;

    cout << "Enter num2: ";
    cin >> num2;

    MyNumber myNum1(num1);
    MyNumber myNum2(num2);
    MyNumber product = myNum1 * myNum2;

    cout << "Multiply the numbers: " << myNum1.getValue() << " * " << myNum2.getValue() << " = " << product.getValue() << std::endl;
    return 0;
}

