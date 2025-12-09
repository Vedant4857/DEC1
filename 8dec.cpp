#include <iostream>
using namespace std;

int main()
{


// 1
// 01
// 101
// 0101
// 10101
  
  // for (int i = 1; i <=5; i++)
  // {
  //   bool num = i%2;
  //   for (int j = 1; j <=i; j++)
  //   {
  //     cout<<num;
  //     num = !num;
  //   }
    
  //   cout<<endl;
  // }


// A
// AB
// ABC
// ABCD
// ABCDE

  // for (int i = 1; i <=5; i++)
  // {
  //   char x = 65;
  //   for (int j = 1; j <=i; j++)
  //   {
  //     cout<<x;
  //     x++;
  //   }
  //   cout<<endl;
  // }

// A
// BB
// CCC
// DDDD
// EEEEE


  // char x = 65;
  // for (int i = 1; i <=5; i++)
  // {
    
  //   for (int j = 1; j <=i; j++)
  //   {
  //     cout<<x;
  //   }
  //   x++;
  //   cout<<endl;
  // }
  

//    1
//   121
//  12321
// 1234321
// 123454321

  // int n =5;
  //  for (int i = 1; i <= n; i++)
  //  {
  //   for (int j = 1; j <n-i; j++)
  //   {
  //     cout<<" ";
  //   }

  //   for (int j = 1; j <=i; j++)
  //   {
  //     cout<<j;
  //   }

  //   for (int j = i-1; j >=1; j--)
  //   {
  //     cout<<j;
  //   }
  //   cout<<endl;
  //  }
   




// *        *
// **      **
// ***    ***
// ****  ****
// **********
// **********
// ****  ****
// ***    ***
// **      **
// *        *

  // int n = 5;
  // for (int i = 1; i <=n; i++)
  // {
  //   for (int j = 1; j <=i; j++)
  //   {
  //     cout<<"*";
  //   }

  //   for (int j = 1; j <=(n-i)*2; j++)
  //   {
  //     cout<<" ";
  //   }

  //   for (int j = 1; j <=i; j++)
  //   {
  //     cout<<"*";
  //   }

  //   cout<<endl;
    
  // }

  // for (int i = n; i >=1; i--)
  // {
  //   for (int j = 1; j <=i; j++)
  //   {
  //     cout<<"*";
  //   }

  //   for (int j = 1; j <=(n-i)*2; j++)
  //   {
  //     cout<<" ";
  //   }

  //   for (int j = 1; j <=i; j++)
  //   {
  //     cout<<"*";
  //   }

  //   cout<<endl;
    
  // }



//     *
//    * *
//   *   *
//  *     *
// *       *
//  *     *
//   *   *
//    * *
//     *


  // int n = 5;
  // for (int i = 1; i <=n; i++)
  // {
  //   // for space first
  //   for (int j = 1; j <=n-i; j++)
  //   {
  //     cout<<" ";
  //   }
  //   for(int j =1;j<=i*2-1;j++){
  //     if(j==1 || j==i*2-1){
  //       cout<<"*";
  //     }
  //     else{
  //       cout<<" ";
  //     }
  //   }
  //   cout<<endl;
  // }
  // for (int i = n-1; i >=1; i--)
  // {
  //   // for space first
  //   for (int j = 1; j <=n-i; j++)
  //   {
  //     cout<<" ";
  //   }
  //   for(int j =1;j<=i*2-1;j++){
  //     if(j==1 || j==i*2-1){
  //       cout<<"*";
  //     }
  //     else{
  //       cout<<" ";
  //     }
  //   }
  //   cout<<endl;
  // }




//   *   *
//  * * * *
// *   *   *


// int n = 9; // columns

// for(int i = 1; i <= 3; i++) {
//     for(int j = 1; j <= n; j++) {
//         if((i + j) % 4 == 0 || (i == 2 && j % 4 == 0)) {
//             cout << "*";
//         } else {
//             cout << " ";
//         }
//     }
//     cout << endl;
// }


// prime number
// int n;
// cout<<"Enter the number:";
// cin>>n;
// int z = n;
// for (int i = 2; i <=n; i++)
// {
//   if(i==n){
//     cout<<"Prime number";
//   }

//   else if(n%i==0){
//     cout<<"Not prime";
//     return 0;
//   }
// }

// int n = 957;
// int sum = 0;

// while(n>0){
//   int x = n%10;
//   sum = sum + x;
//   n = n/10;
// }
// cout<<sum;


  return 0;
}
