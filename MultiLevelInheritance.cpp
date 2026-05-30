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
class CSEstudent : public Engineeringstudent
{
public:
    void writecode()
    {
        cout << name << " Can write code" << endl;
    }
};

int main()
{
    CSEstudent *ces1 = new CSEstudent();
    ces1->name = "Vedant";
    ces1->age = 20;

    ces1->markAttendance();
    ces1->attendLab();
    ces1->writecode();

    return 0;
}