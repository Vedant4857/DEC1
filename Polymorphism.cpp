#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void run() = 0;
};

class Duck : public Animal
{
public:
    void run()
    {
        cout << "Running like Duck" << endl;
    }
};

class Dog : public Animal
{
public:
    void run()
    {
        cout << "Running like Dog" << endl;
    }
};

class Human : public Animal
{
public:
    void run()
    {
        cout << "Running like Human" << endl;
    }
};

int main()
{
    Animal *A;

    string userInput;
    cin >> userInput;

    if (userInput == "duck")
    {
        A = new Duck();
    }
    else if (userInput == "dog")
    {
        A = new Dog();
    }
    else
    {
        A = new Human();
    }
    A->run();

    return 0;
}