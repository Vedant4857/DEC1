#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int age;
    int rollNumber;
    string college;

    // student(string n, int a, int rn, string c)
    // {
    //     name = n;
    //     age = a;
    //     rollNumber = rn;
    //     college = c;
    // }
    
};
int main()
{
    // stack & heap
    student s1;
    // s1.name = "Vedant";
    // s1.age = 21;
    // s1.rollNumber = 103;
    // s1.college = "MU";

    cout << s1.name << " " << s1.age << " " << s1.rollNumber << " " << s1.college;
}