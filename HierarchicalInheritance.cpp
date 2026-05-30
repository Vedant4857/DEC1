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

class Medicalstudent : public student
{
public:
    void performoperation()
    {
        cout << "Operation performed by " << name << endl;
    }
};

int main()
{
    Engineeringstudent *es1 = new Engineeringstudent();
    es1->name = "Vedant";
    es1->age = 20;

    es1->markAttendance();
    es1->attendLab();

    Medicalstudent *ms1 = new Medicalstudent();
    ms1->name = "Mike";
    ms1->age = 23;

    ms1->markAttendance();
    ms1->performoperation();

    return 0;
}