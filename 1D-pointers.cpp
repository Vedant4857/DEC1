#include <iostream>
using namespace std;

int main()
{
  //Storing the address of the array in heap in the stack
  int *arr = new int[5];
  
  //Initializing the array with values
  for(int i =0;i<5;i++){
    arr[i] = i + 1;
  }

  //Printing the values
  for(int i =0;i<5;i++){
    cout<<arr[i]<<" ";
  }

  //free memory
  delete[] arr;


  return 0;
}
