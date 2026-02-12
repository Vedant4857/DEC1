#include <iostream>
using namespace std;

int main()
{

  //2d array
  
  // int ** arr = new int *[5];


  // for(int i =0;i<5;i++){
  //   arr[i] = new int[6];
  // }

  // for(int i =0;i<5;i++){
  //   for(int j =0;j<6;j++){
  //     arr[i][j] = i + j;
  //   }
  // }

  // for(int i =0;i<5;i++){
  //   for(int j =0;j<6;j++){
  //     cout<<arr[i][j]<<" ";
  //   }
  //   cout<<endl;
  // }





  //3d array

  int *** arr = new int **[3];

  //2d array

  for(int i = 0;i<3;i++){
    arr[i] = new int* [5];
  }

  for(int i =0;i<3;i++){
    for(int j =0;j<5;j++){
      arr[i][j] = new int[6];
    }
  }
  
  // 3 row 5 col 6 height

  for(int i =0;i<3;i++){
    for(int j =0;j<5;j++){
      for(int k=0;k<6;k++){
        arr[i][j][k] = i +j + k;
      }
    }
  }

  for(int i =0;i<3;i++){
    for(int j =0;j<5;j++){
      for(int k=0;k<6;k++){
        cout<<arr[i][j][k]<<" ";// = i +j + k;
      }
      cout<<endl;
    }
    cout<<endl;
  }



  return 0;
}
