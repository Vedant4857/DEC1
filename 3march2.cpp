#include <iostream>
using namespace std;

class Customer{
  public:
  int age, balance;
  string name;
};
int main()
{
  Customer *C1 = new Customer();

  // (*C1).name = "Vedant";
  // (*C1).age = 20;
  // (*C1).balance = 20000;

  C1->name = "Vedant";
  C1->age = 20;
  C1->balance = 20000;


  cout<<C1->name;

  return 0;
}
