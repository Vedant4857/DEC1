#include <iostream>
using namespace std;

int main()
{
  //array is a pointer which points to an array of pinter which points to an array of integer
  int **arr = new int *[5];

  //make another integer for those pointer array
  for(int i =0;i<5;i++){
    arr[i] = new int[3];
  }

  for(int i =0;i<5;i++){
    for(int j =0;j<3;j++){
      arr[i][j] = i+j;
    }
  }

  for(int i =0;i<5;i++){
    for(int j =0;j<3;j++){
      cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }

    for(int i=0;i<2;i++){
      delete[] arr[i];
    }
delete[] arr;

  return 0;
}
