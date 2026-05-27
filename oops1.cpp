#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int age;
    int rollNumber;
    string college;

    // parameterized constrictor
    student(string n, int a, int rn, string c)
    {
        name = n;
        age = a;
        rollNumber = rn;
        college = c;
    }

    // default constructore
    student()
    {
    }

    // behaviours of an object --> functions -->methods
    void markAttendance()
    {
        cout << name << " is present" << endl;
    }
    void print()
    {
        cout << name << " " << age << " " << rollNumber << " " << college << endl;
    }
};
class calculator
{
    int x, y;
    int add()
    {
        return 0;
    }
    int subtract()
    {
        return 0;
    }
};
int main()
{
    // stack
    student s1("Vedant", 21, 103, "MU");
    // s1.name = "Vedant";
    // s1.age = 21;
    // s1.rollNumber = 103;
    // s1.college = "MU";
    s1.print();
    s1.markAttendance();

    // Heap
    student *s2 = new student("Virat", 38, 204, "DU");
    cout << s2->name << " " << s2->age << " " << s2->rollNumber << " " << s2->college << endl;
}