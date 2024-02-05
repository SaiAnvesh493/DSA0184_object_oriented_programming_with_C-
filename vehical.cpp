#include <iostream>
#include <string>
using namespace std;
class Vehicle {
protected:
    string brand;
    string model;

public:
    Vehicle(const string& _brand, const string& _model)
        : brand(_brand), model(_model) {}

    void displayInfo() {
        cout << "Brand: " << brand << "\nModel: " << model << endl;
    }
};
class Car : public Vehicle {
private:
    int seatingCapacity;
    string fuelType;

public:
    Car(const string& _brand, const string& _model, int _seatingCapacity, const std::string& _fuelType)
        : Vehicle(_brand, _model), seatingCapacity(_seatingCapacity), fuelType(_fuelType) {}

    void displayCarInfo() {
        displayInfo(); 
        cout << "Seating Capacity: " << seatingCapacity << "\nFuel Type: " << fuelType << endl;
    }
};
class Truck : public Vehicle {
private:
    double payloadCapacity;
public:
    Truck(const string& _brand, const string& _model, double _payloadCapacity)
        : Vehicle(_brand, _model), payloadCapacity(_payloadCapacity) {}

    void displayTruckInfo() {
        displayInfo();
        cout << "Payload Capacity: " << payloadCapacity << " tons" << endl;
    }
};
int main() {
    Car myCar("Toyota", "Camry", 5, "Petrol");
    cout << "Car Information:" << endl;
    myCar.displayCarInfo();
    Truck myTruck("Ford", "F-150", 2.5);
    cout << "\nTruck Information:" << endl;
    myTruck.displayTruckInfo();
    return 0;
}
