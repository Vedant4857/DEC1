#include <iostream>
using namespace std;
// void BirthdayCount(int i){
//   if(i==0){
//     cout<<"Happy Birthday";
//     return;
//   }
//     cout<<i<<" days left for birthday\n";
//     BirthdayCount(i-1);
//   }

int fact(int i){
  if(i==1){
    return 1;
  }
  
  return (i * fact(i-1));
}
int main()
{
    
  int facto = fact(5);
  cout<<facto;
  return 0;
}
