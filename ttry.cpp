#include<iostream>
using namespace std;

string name(string str, string str1) {
    return str + str1;
}

char name(char ch, char ch1) {
    return ch + ch1;
}

int main() {
    string str, str1;
    char ch, ch1;

    cout << "Enter the 1st string: ";
    cin >> str;

    cout << "Enter the 2nd string: ";
    cin >> str1;

    cout << "Enter the 1st char: ";
    cin >> ch;

    cout << "Enter the 2nd char: ";
    cin >> ch1;

    cout << "Two strings: " << name(str, str1) << endl;
    cout << "Two chars: " << name(ch, ch1);

    return 0;
}

