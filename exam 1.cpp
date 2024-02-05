#include<iostream>
#include<string>
using namespace std;

class Book
{
public:
    int cost;
    string Book_name;
    string Author_name;
    Book(string Book_name, int cost, string Author_name)
    {
        this->Book_name = Book_name;
        this->cost = cost;
        this->Author_name = Author_name;
    }
    ~Book()
    {
        cout << "Book cost " << cost-15 << " decreased";
    }

    void display()
    {
        cout << "Book Name: " << Book_name << endl;
        cout << "Cost: " << cost << endl;
        cout << "Author Name: " << Author_name << endl;
    }
};

int main()
{
    string name;
    string a_name;
    int cost;

    cout << "Book name:";
    cin >> name;
    cout << "Enter the cost:";
    cin >> cost;
    cout << "Author Name:";
    cin >> a_name;

    Book obj(name, cost, a_name);
    obj.display();
    return 0;
}

