// #include <iostream>
// using namespace std;
// void print(int arr[],int index,int n){
//   if(index==n) return;
//   cout<<arr[index]<<endl;
//   print(arr,index+1,n);
// }

// int main()
// {
//   int arr[6] = {1,2,3,4,5,6};
//   print(arr,0,6);

//   return 0;
// }






// #include <iostream>
// using namespace std;
// void print(int arr[],int index,int n){
//   if(n==index) return;
//   cout<<arr[n-1]<<endl;
//   print(arr,index,n-1);

// }
// int main()
// {
//   int arr[6] = {1,2,3,4,5,6};
//   print(arr,0,6);

//   return 0;
// }





// #include <iostream>
// using namespace std;
// void print(int arr[],int index,int n){
//   if(index==n) return;
//   print(arr,index+1,n);
//   cout<<arr[index]<<endl;
// }
// int main()
// {
//   int arr[6] = {1,2,3,4,5,6};
//   print(arr,0,6);

//   return 0;
// }




// #include <iostream>
// using namespace std;
// void print(int arr[],int index){
//   if(index==-1) return;
//   cout<<arr[index]<<endl;
//   print(arr,index-1);
// }
// int main()
// {
//   int arr[6] = {1,2,3,4,5,6};
//   print(arr,5);

//   return 0;
// }




// #include <iostream>
// using namespace std;
// void print(int arr[],int index){
//   if(index==-1) return;
//   print(arr,index-1);
//   cout<<arr[index]<<endl;
// }
// int main()
// {
//   int arr[6] = {1,2,3,4,5,6};
//   print(arr,5);

//   return 0;
// }




#include <iostream>
using namespace std;

int sum(int arr[],int index,int n){
  if(index==n){
    return 0;
  }
  return (arr[index] + sum(arr,index+1,n));
}
int main()
{
  int arr[6] = {1,2,3,4,5,6};
  cout<<sum(arr,0,6);

  return 0;
}

