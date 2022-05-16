#include <iostream>
#include <string>

using namespace std;

class Car
{
public:
    string colour;
    string brand;
    string model;
    int numberOfSeats;
    void turnOnEngine()
    {
        cout << "Engine turned on" << endl;
    }
    void honkHorn()
    {
        cout << "Horn was honked" << endl;
    }
    void turnCarRight()
    {
        cout << "Car turned right" << endl;
    }
};

int main()
{
    Car mycar;
    mycar.colour = "Blue";
    mycar.brand = "Toyota";
    mycar.model = "Sedan";
    mycar.numberOfSeats = 5;

    cout << mycar.colour << endl;
    cout << mycar.numberOfSeats << endl;
    mycar.turnOnEngine();
    mycar.honkHorn();
    mycar.turnCarRight();

    return 0;
}