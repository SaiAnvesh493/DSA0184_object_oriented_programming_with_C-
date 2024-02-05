#include <iostream>
class Counter {
private:
    int count;

public:
    Counter() : count(1) {}

    void operator++(){
        ++count;
    }
    void displayCount() {
        std::cout << "Count: " << count << std::endl;
    }
};

int main() {
    Counter myCounter;
    ++myCounter;
    myCounter.displayCount();
    return 0;
}
