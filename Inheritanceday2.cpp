#include <iostream>
using namespace std;
class Base
{
public:
    void show()
    {
        cout << "Showing base class";
    }
};
class A : public Base
{
public:
    // void show()
    // {
    //     cout << "showing A" << endl;
    // }
};

class B : public Base
{
public:
    // void show()
    // {
    //     cout << "Showing B" << endl;
    // }
};

class C : public A, public B
{
    // empty class
};

int main()
{
    C *c = new C();
    // c->show();
    c->B::show(); // ::Scope Resolution operator
    return 0;
}