#include <iostream>
using namespace std;

class Student{
  public:
  string name;
  int age;
  int RollNo;
};
class Customer{
  public:
  string name;
  string bank;
  int age;
  int account_num;
  int balance;
};


int main()
{
  Student S1,S2,S3;
  S1.name = "Vedant";
  S1.age = 20;
  S1.RollNo = 103;

  S2.name = "Mainak";
  S2.age = 20;
  S2.RollNo = 30;

  S3 = S2;

  cout<<S1.name<<" "<<S1.age<<" "<<S1.RollNo<<endl;
  cout<<S2.name<<" "<<S2.age<<" "<<S2.RollNo<<endl;
  cout<<S3.name<<" "<<S3.age<<" "<<S3.RollNo<<endl;

  Customer C1;
  C1.name = "Kamlaj";
  C1.bank = "Federal Bank";
  C1.age = 24;
  C1.account_num = 96013;
  C1.balance = 200000;

  cout<<C1.name<<" "<<C1.bank<<" "<<C1.age<<" "<<C1.account_num<<" "<<C1.balance<<endl;


  return 0;
}
