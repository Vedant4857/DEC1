#include <iostream>
using namespace std;

int main()
{
  //arr is a pointer that points to a pointer that points to a pointer that points to an int array
  int ***arr = new int**[2];

  //making the the first array pointer point to another array of pointer of size 2
  for(int i =0;i<2;i++){
    arr[i] = new int*[2];
  }

  //making the second array of pointer point to an array of integer of size 2
  for(int i =0;i<2;i++){
    for(int j =0;j<2;j++){
      arr[i][j] = new int[2];
    }
  }
 
  //intializing the 3d array
  for(int i =0;i<2;i++){
    for(int j =0;j<2;j++){
      for(int k =0;k<2;k++){
        arr[i][j][k] = i + j + k;
      }
    }
  }

  //printing the values
  for(int i =0;i<2;i++){
    for(int j =0;j<2;j++){
      for(int k =0;k<2;k++){
        cout<<arr[i][j][k]<<" ";
      }
      cout<<endl;
    }
    cout<<endl;
  }

  //freeing up the space
  for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        delete[] arr[i][j];
    }
    delete[] arr[i];
}
  delete[] arr;
  
  return 0;
}
