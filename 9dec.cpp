#include <iostream>
using namespace std;

int main()
{
    
  // for loop
  //while loop

  // int i = 1;

  // do{
  //   cout<<i<<" ";
  //   i++;

  // }while(i<10);



  // reverse of a number

  // int n;
  // cout<<"Enter the number:";
  // cin>>n;
  // int sum;

  // while(n>0){
  //   int x = n%10;
  //   sum = sum * 10 + x;
  //   n = n/10;
  // }
  // cout<<sum;



  //  decimal to binary
  // int n =13;
  // int x;
  // int sum = 0;

  // while(n>0){
  //   x = n%2;
  //   sum = sum * 10 +x;
  //   n = n/2;
  // }

  // // cout<<sum;

  // int z = 0;

  // while(sum>0){
  //   int y = sum%10;
  //   z = z * 10 + y;
  //   sum = sum/10;
  // }
  // cout<<z;

  // int num = 13;
  // int mul = 1;
  // int ans = 0;

  // while(num!=0){
  //   //  rem = num%2;
  //   int rem = num&1;
  //   ans = ans + rem*mul;
  //   //num = num/2;
  //   num = num>>1;
  //   mul = mul*10;
  // }
  // cout<<ans;

  // binary to decimal

  int bin = 1101;
  int mul = 1;
  int  ans = 0;

  while(bin>0){
    int rem = bin % 10;
    ans = rem * mul + ans;
    mul = mul * 2;
    bin = bin/10;
  }
  cout<<ans;




  return 0;
}
