// High Level Abstarction
#include <iostream>
using namespace std;

class Car
{
public:
    virtual void drive() = 0;
    void startengine()
    {
        cout << "Engine Started" << endl;
    }
};

class PetrolCar : public Car
{
public:
    void drive() // how can i do it
    {
        cout << "Driving Petrol Car" << endl;
    }
};

class ElectricCar : public Car
{
public:
    void drive() // how can i do it
    {
        cout << "Driving Electric Car" << endl;
    }
};

int main()
{
    Car *c = new ElectricCar();
    Car *c1 = new PetrolCar();
    c1->drive(); // what i want to do
    c->drive();
    // i ahve separtaed what with how becuase two hows.
    return 0;
}