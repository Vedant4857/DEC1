#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int age;

    void markAttendance()
    {
        cout << name << " is present" << endl;
    }
};
class Engineeringstudent : public student
{
public:
    void attendLab()
    {
        cout << "Lab attended by " << name << endl;
    }
};

int main()
{
    Engineeringstudent *es1 = new Engineeringstudent();
    es1->name = "Vedant";
    es1->age = 20;

    es1->markAttendance();
    es1->attendLab();

    return 0;
}