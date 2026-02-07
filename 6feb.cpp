#include<iostream>
using namespace std;

// int add(int *p,int size){
//   int ans = 0;
//   for(int i =0;i<size;i++){
//     ans += p[i];
//   }
//   return ans;
// }

int main(){
  // int a = 10;
  // int *b = &a;
  // cout<<&a<<endl;
  // cout<<b<<endl;
  // cout<<&b<<endl;

  // int a = 10;
  // int *ptr = &a;
  // // ptr is a pointer which points to integer type value

  // cout<<a<<endl;
  // //value of a
  // cout<<&a<<endl;
  // //address of a
  // cout<<ptr<<endl;
  // //address of a
  // cout<<&ptr<<endl;
  // //address of ptr

  //Printing the address
  // int arr[6] = {1,2,3,4,5,6};
  // for (int i = 0; i < 6; i++)
  // {
  //   cout<<arr+i<<endl;
  // }

  // //Printing the values
  // for (int i = 0; i < 6; i++)
  // {
  //   cout<<*(arr+i)<<endl;
  // }

  // int *p = arr;
  // for (int i = 0; i < 6; i++)
  // {
  //   cout<<p[i]<<endl;
  // }

  // for (int i = 0; i < 6; i++)
  // {
  //   cout<<p+i<<endl;
  // }

  // int arr[10] = {1,2,3,4,5,6,7,8,9,10};
  // int ans = add(arr,10);
  // cout<<ans;

  char arr[5] = {'a','b','c','d','e'};
  char *ptr = arr;
  cout<<ptr;
  

  return 0;
} 