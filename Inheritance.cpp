// parent class childd class
//  like and engineering student class will derive some data and methods from a student class
#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int age;
    int rollNumber;
    string college;

    void markAttendance()
    {
        cout << name << " is present" << endl;
    }
};
// EngineeringStudnet "is-a" student
class EngineeringStudent : public student
{
    // empty
};

// DRY- Do Not Repeat Yourself;

int main()
{
    student *s1 = new student();
    EngineeringStudent *e1 = new EngineeringStudent();

    s1->name = "vedant";
    s1->age = 20;

    e1->name = "John";
    e1->age = 34;

    s1->markAttendance();
    e1->markAttendance();

    return 0;
}