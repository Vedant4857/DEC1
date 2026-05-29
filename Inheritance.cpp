// parent class childd class
//  like and engineering student class will derive some data and methods from a student class
#include <iostream>
using namespace std;

class student
{
protected:
    string name;
    int age;
    int rollNumber;
    string college;

public:
    student() {}

    student(string n, int a)
    {
        name = n;
        age = a;
    }

    void markAttendance()
    {
        cout << name << " is present" << endl;
    }
};
// EngineeringStudnet "is-a" student
class EngineeringStudent : public student
{
    // protected can only be used inside the child class and parent class cant be accessed form outside
public:
    EngineeringStudent(string n, int a)
    {
        name = n;
        age = a;
    }
    void fun()
    {
        cout << name << " " << age << endl;
    }
};

// DRY- Do Not Repeat Yourself;

int main()
{
    student *s1 = new student("Vedant", 20);
    EngineeringStudent *e1 = new EngineeringStudent("Vedant", 20);

    // s1->name = "vedant";
    // s1->age = 20;

    // e1->name = "John";
    // e1->age = 34;

    // s1->markAttendance();
    // e1->markAttendance();
    e1->fun();

    return 0;
}