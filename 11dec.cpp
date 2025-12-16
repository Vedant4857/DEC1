#include <iostream>
using namespace std;

int factorial(int num){
  int fact = 1;
  for (int i = 1; i <=num; i++)
  {
    fact = fact * i;
  }
  return fact;
}

int main()
{
  //factorial
  int n;
  cout<<"Enter the number for factorial:";
  cin>>n;
  int ans = factorial(n);
  cout<<ans;
  
  return 0;
}
